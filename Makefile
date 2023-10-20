

all:
	g++ -g -c c_utils.c
	g++ -g -c cxx_string.cpp
	g++ -g -c cxx_vector_string.cpp
	g++ -g -c cxx_vector_int.cpp
	g++ -g -c cxx_vector_dbl.cpp
	gfortran-12 -g -c f_c_string_mod.f90
	gfortran-12 -g -c cxx_string_mod.f90
	gfortran-12 -g -c cxx_vector_string_mod.f90
	gfortran-12 -g -c cxx_vector_int_mod.f90
	gfortran-12 -g -c cxx_vector_dbl_mod.f90
	gfortran-12 -g -c string_test.f90
	gfortran-12 -g -o string_test string_test.o cxx_string_mod.o f_c_string_mod.o cxx_string.o c_utils.o -lc++
	gfortran-12 -g -c vectorstring_test.f90
	gfortran-12 -g -o vectorstring_test vectorstring_test.o cxx_vector_string_mod.o cxx_vector_string.o cxx_string_mod.o f_c_string_mod.o cxx_string.o c_utils.o -lc++
	gfortran-12 -g -c f_c_string_test.f90
	gfortran-12 -g -o f_c_string_test f_c_string_test.o f_c_string_mod.o c_utils.o -lc++

clean:
	rm -fr *.o *.mod vectorstring_test string_test
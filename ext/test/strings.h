
extern zend_class_entry *test_strings_ce;

ZEPHIR_INIT_CLASS(Test_Strings);

PHP_METHOD(Test_Strings, testTrim);
PHP_METHOD(Test_Strings, testRtrim);
PHP_METHOD(Test_Strings, testLtrim);
PHP_METHOD(Test_Strings, testTrim2Params);
PHP_METHOD(Test_Strings, testRtrim2Params);
PHP_METHOD(Test_Strings, testLtrim2Params);
PHP_METHOD(Test_Strings, testImplode);
PHP_METHOD(Test_Strings, testStrpos);
PHP_METHOD(Test_Strings, testStrposOffset);
PHP_METHOD(Test_Strings, testExplode);
PHP_METHOD(Test_Strings, testExplodeStr);
PHP_METHOD(Test_Strings, testExplodeLimit);
PHP_METHOD(Test_Strings, testSubstr);
PHP_METHOD(Test_Strings, testSubstr2);
PHP_METHOD(Test_Strings, testSubstr3);
PHP_METHOD(Test_Strings, testSubstr4);

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testtrim, 0, 0, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testrtrim, 0, 0, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testltrim, 0, 0, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testtrim2params, 0, 0, 2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testrtrim2params, 0, 0, 2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testltrim2params, 0, 0, 2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testimplode, 0, 0, 2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_teststrpos, 0, 0, 2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_teststrposoffset, 0, 0, 3)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testexplode, 0, 0, 2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testexplodestr, 0, 0, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testexplodelimit, 0, 0, 2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testsubstr, 0, 0, 3)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testsubstr2, 0, 0, 2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testsubstr3, 0, 0, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_test_strings_testsubstr4, 0, 0, 1)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(test_strings_method_entry) {
	PHP_ME(Test_Strings, testTrim, arginfo_test_strings_testtrim, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testRtrim, arginfo_test_strings_testrtrim, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testLtrim, arginfo_test_strings_testltrim, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testTrim2Params, arginfo_test_strings_testtrim2params, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testRtrim2Params, arginfo_test_strings_testrtrim2params, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testLtrim2Params, arginfo_test_strings_testltrim2params, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testImplode, arginfo_test_strings_testimplode, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testStrpos, arginfo_test_strings_teststrpos, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testStrposOffset, arginfo_test_strings_teststrposoffset, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testExplode, arginfo_test_strings_testexplode, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testExplodeStr, arginfo_test_strings_testexplodestr, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testExplodeLimit, arginfo_test_strings_testexplodelimit, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testSubstr, arginfo_test_strings_testsubstr, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testSubstr2, arginfo_test_strings_testsubstr2, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testSubstr3, arginfo_test_strings_testsubstr3, ZEND_ACC_PUBLIC)
	PHP_ME(Test_Strings, testSubstr4, arginfo_test_strings_testsubstr4, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

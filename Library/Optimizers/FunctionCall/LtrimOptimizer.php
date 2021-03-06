<?php

/*
 +--------------------------------------------------------------------------+
 | Zephir Language                                                          |
 +--------------------------------------------------------------------------+
 | Copyright (c) 2013-2014 Zephir Team and contributors                     |
 +--------------------------------------------------------------------------+
 | This source file is subject the MIT license, that is bundled with        |
 | this package in the file LICENSE, and is available through the           |
 | world-wide-web at the following url:                                     |
 | http://zephir-lang.com/license.html                                      |
 |                                                                          |
 | If you did not receive a copy of the MIT license and are unable          |
 | to obtain it through the world-wide-web, please send a note to           |
 | license@zephir-lang.com so we can mail you a copy immediately.           |
 +--------------------------------------------------------------------------+
*/

require_once ZEPHIRPATH . 'Library/Optimizers/FunctionCall/TrimOptimizer.php';

/**
 * LtrimOptimizer
 *
 * Optimizes calls to 'ltrim' using internal function
 */
class LtrimOptimizer
	extends TrimOptimizer
{

        protected static $TRIM_WHERE = 'ZEPHIR_TRIM_LEFT';

}


#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalconphp.com>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */
/**
 * Phalcon\Filter\UserFilterInterface
 *
 * Interface for Phalcon\Filter user-filters
 */
ZEPHIR_INIT_CLASS(Phalcon_Filter_UserFilterInterface) {

	ZEPHIR_REGISTER_INTERFACE(Phalcon\\Filter, UserFilterInterface, phalcon, filter_userfilterinterface, phalcon_filter_userfilterinterface_method_entry);

	return SUCCESS;

}

/**
 * Filters a value
 */
ZEPHIR_DOC_METHOD(Phalcon_Filter_UserFilterInterface, filter);


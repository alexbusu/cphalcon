<?php

/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalconphp.com>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */

namespace Phalcon\Test\Fixtures\Listener;

use Phalcon\Events\Event;
use Phalcon\Http\Request;

class CustomAuthorizationListener
{
    public function beforeAuthorizationResolve(Event $event, Request $request, array $data)
    {
        return [
            'Fired-Before' => $event->getType(),
        ];
    }

    public function afterAuthorizationResolve(Event $event, Request $request, array $data)
    {
        return [
            'Fired-After' => $event->getType(),
        ];
    }
}

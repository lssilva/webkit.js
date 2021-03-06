/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGDocument.h"

#include "Event.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSSVGSVGElement.h"
#include "SVGDocument.h"
#include "SVGSVGElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGDocumentTableValues[] =
{
    { "rootElement", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGDocumentRootElement), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGDocumentConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGDocumentTable = { 4, 3, JSSVGDocumentTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGDocumentConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGDocumentConstructorTable = { 1, 0, JSSVGDocumentConstructorTableValues, 0 };
const ClassInfo JSSVGDocumentConstructor::s_info = { "SVGDocumentConstructor", &Base::s_info, &JSSVGDocumentConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGDocumentConstructor) };

JSSVGDocumentConstructor::JSSVGDocumentConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGDocumentConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGDocumentPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGDocumentConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGDocumentConstructor, JSDOMWrapper>(exec, JSSVGDocumentConstructorTable, jsCast<JSSVGDocumentConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGDocumentPrototypeTableValues[] =
{
    { "createEvent", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGDocumentPrototypeFunctionCreateEvent), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGDocumentPrototypeTable = { 2, 1, JSSVGDocumentPrototypeTableValues, 0 };
const ClassInfo JSSVGDocumentPrototype::s_info = { "SVGDocumentPrototype", &Base::s_info, &JSSVGDocumentPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGDocumentPrototype) };

JSObject* JSSVGDocumentPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGDocument>(vm, globalObject);
}

bool JSSVGDocumentPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGDocumentPrototype* thisObject = jsCast<JSSVGDocumentPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSSVGDocumentPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSSVGDocument::s_info = { "SVGDocument", &Base::s_info, &JSSVGDocumentTable, 0 , CREATE_METHOD_TABLE(JSSVGDocument) };

JSSVGDocument::JSSVGDocument(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGDocument> impl)
    : JSDocument(structure, globalObject, impl)
{
}

void JSSVGDocument::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGDocument::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGDocumentPrototype::create(vm, globalObject, JSSVGDocumentPrototype::createStructure(vm, globalObject, JSDocumentPrototype::self(vm, globalObject)));
}

bool JSSVGDocument::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGDocument* thisObject = jsCast<JSSVGDocument*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGDocument, Base>(exec, JSSVGDocumentTable, thisObject, propertyName, slot);
}

EncodedJSValue jsSVGDocumentRootElement(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGDocument* castedThis = jsDynamicCast<JSSVGDocument*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGDocument& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.rootElement()));
    return JSValue::encode(result);
}


EncodedJSValue jsSVGDocumentConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSSVGDocument* domObject = jsDynamicCast<JSSVGDocument*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGDocument::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGDocument::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGDocumentConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGDocumentPrototypeFunctionCreateEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGDocument* castedThis = jsDynamicCast<JSSVGDocument*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGDocument::info());
    SVGDocument& impl = castedThis->impl();
    ExceptionCode ec = 0;
    const String& eventType(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.createEvent(eventType, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG)

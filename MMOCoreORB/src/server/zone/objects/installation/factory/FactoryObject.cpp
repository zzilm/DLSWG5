/*
 *	server/zone/objects/installation/factory/FactoryObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "FactoryObject.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

#include "server/zone/objects/factorycrate/FactoryCrate.h"

#include "server/zone/objects/tangible/TangibleObject.h"

/*
 *	FactoryObjectStub
 */

FactoryObject::FactoryObject() : InstallationObject(DummyConstructorParameter::instance()) {
	_impl = new FactoryObjectImplementation();
	_impl->_setStub(this);
}

FactoryObject::FactoryObject(DummyConstructorParameter* param) : InstallationObject(param) {
}

FactoryObject::~FactoryObject() {
}


void FactoryObject::loadTemplateData(SharedObjectTemplate* templateData) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((FactoryObjectImplementation*) _impl)->loadTemplateData(templateData);
}

void FactoryObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((FactoryObjectImplementation*) _impl)->initializeTransientMembers();
}

void FactoryObject::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((FactoryObjectImplementation*) _impl)->fillAttributeList(msg, object);
}

void FactoryObject::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((FactoryObjectImplementation*) _impl)->fillObjectMenuResponse(menuResponse, player);
}

int FactoryObject::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return ((FactoryObjectImplementation*) _impl)->handleObjectMenuSelect(player, selectedID);
}

bool FactoryObject::isFactory() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithBooleanReturn();
	} else
		return ((FactoryObjectImplementation*) _impl)->isFactory();
}

void FactoryObject::createChildObjects() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((FactoryObjectImplementation*) _impl)->createChildObjects();
}

void FactoryObject::updateInstallationWork() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((FactoryObjectImplementation*) _impl)->updateInstallationWork();
}

void FactoryObject::sendInsertManuSui(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((FactoryObjectImplementation*) _impl)->sendInsertManuSui(player);
}

void FactoryObject::sendIngredientsNeededSui(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((FactoryObjectImplementation*) _impl)->sendIngredientsNeededSui(player);
}

void FactoryObject::sendIngredientHopper(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((FactoryObjectImplementation*) _impl)->sendIngredientHopper(player);
}

void FactoryObject::sendOutputHopper(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((FactoryObjectImplementation*) _impl)->sendOutputHopper(player);
}

void FactoryObject::handleInsertFactorySchem(PlayerCreature* player, ManufactureSchematic* schematic) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addObjectParameter(schematic);

		method.executeWithVoidReturn();
	} else
		((FactoryObjectImplementation*) _impl)->handleInsertFactorySchem(player, schematic);
}

void FactoryObject::handleRemoveFactorySchem(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((FactoryObjectImplementation*) _impl)->handleRemoveFactorySchem(player);
}

void FactoryObject::handleOperateToggle(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((FactoryObjectImplementation*) _impl)->handleOperateToggle(player);
}

void FactoryObject::createNewObject() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		method.executeWithVoidReturn();
	} else
		((FactoryObjectImplementation*) _impl)->createNewObject();
}

/*
 *	FactoryObjectImplementation
 */

FactoryObjectImplementation::FactoryObjectImplementation(DummyConstructorParameter* param) : InstallationObjectImplementation(param) {
	_initializeImplementation();
}


FactoryObjectImplementation::~FactoryObjectImplementation() {
}


void FactoryObjectImplementation::finalize() {
}

void FactoryObjectImplementation::_initializeImplementation() {
	_setClassHelper(FactoryObjectHelper::instance());

	_serializationHelperMethod();
}

void FactoryObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (FactoryObject*) stub;
	InstallationObjectImplementation::_setStub(stub);
}

DistributedObjectStub* FactoryObjectImplementation::_getStub() {
	return _this;
}

FactoryObjectImplementation::operator const FactoryObject*() {
	return _this;
}

void FactoryObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void FactoryObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void FactoryObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void FactoryObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void FactoryObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void FactoryObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void FactoryObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void FactoryObjectImplementation::_serializationHelperMethod() {
	InstallationObjectImplementation::_serializationHelperMethod();

	_setClassName("FactoryObject");

	addSerializableVariable("craftingTabsSupported", &craftingTabsSupported);
	addSerializableVariable("timer", &timer);
	addSerializableVariable("currentUserName", &currentUserName);
	addSerializableVariable("currentRunCount", &currentRunCount);
}

FactoryObjectImplementation::FactoryObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/installation/factory/FactoryObject.idl(19):  		Logger.setLoggingName("FactoryObject");
	Logger::setLoggingName("FactoryObject");
}

bool FactoryObjectImplementation::isFactory() {
	// server/zone/objects/installation/factory/FactoryObject.idl(57):  		return true;
	return true;
}

/*
 *	FactoryObjectAdapter
 */

FactoryObjectAdapter::FactoryObjectAdapter(FactoryObjectImplementation* obj) : InstallationObjectAdapter(obj) {
}

Packet* FactoryObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 8:
		resp->insertBoolean(isFactory());
		break;
	case 9:
		createChildObjects();
		break;
	case 10:
		updateInstallationWork();
		break;
	case 11:
		sendInsertManuSui((PlayerCreature*) inv->getObjectParameter());
		break;
	case 12:
		sendIngredientsNeededSui((PlayerCreature*) inv->getObjectParameter());
		break;
	case 13:
		sendIngredientHopper((PlayerCreature*) inv->getObjectParameter());
		break;
	case 14:
		sendOutputHopper((PlayerCreature*) inv->getObjectParameter());
		break;
	case 15:
		handleInsertFactorySchem((PlayerCreature*) inv->getObjectParameter(), (ManufactureSchematic*) inv->getObjectParameter());
		break;
	case 16:
		handleRemoveFactorySchem((PlayerCreature*) inv->getObjectParameter());
		break;
	case 17:
		handleOperateToggle((PlayerCreature*) inv->getObjectParameter());
		break;
	case 18:
		createNewObject();
		break;
	default:
		return NULL;
	}

	return resp;
}

void FactoryObjectAdapter::initializeTransientMembers() {
	((FactoryObjectImplementation*) impl)->initializeTransientMembers();
}

int FactoryObjectAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((FactoryObjectImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

bool FactoryObjectAdapter::isFactory() {
	return ((FactoryObjectImplementation*) impl)->isFactory();
}

void FactoryObjectAdapter::createChildObjects() {
	((FactoryObjectImplementation*) impl)->createChildObjects();
}

void FactoryObjectAdapter::updateInstallationWork() {
	((FactoryObjectImplementation*) impl)->updateInstallationWork();
}

void FactoryObjectAdapter::sendInsertManuSui(PlayerCreature* player) {
	((FactoryObjectImplementation*) impl)->sendInsertManuSui(player);
}

void FactoryObjectAdapter::sendIngredientsNeededSui(PlayerCreature* player) {
	((FactoryObjectImplementation*) impl)->sendIngredientsNeededSui(player);
}

void FactoryObjectAdapter::sendIngredientHopper(PlayerCreature* player) {
	((FactoryObjectImplementation*) impl)->sendIngredientHopper(player);
}

void FactoryObjectAdapter::sendOutputHopper(PlayerCreature* player) {
	((FactoryObjectImplementation*) impl)->sendOutputHopper(player);
}

void FactoryObjectAdapter::handleInsertFactorySchem(PlayerCreature* player, ManufactureSchematic* schematic) {
	((FactoryObjectImplementation*) impl)->handleInsertFactorySchem(player, schematic);
}

void FactoryObjectAdapter::handleRemoveFactorySchem(PlayerCreature* player) {
	((FactoryObjectImplementation*) impl)->handleRemoveFactorySchem(player);
}

void FactoryObjectAdapter::handleOperateToggle(PlayerCreature* player) {
	((FactoryObjectImplementation*) impl)->handleOperateToggle(player);
}

void FactoryObjectAdapter::createNewObject() {
	((FactoryObjectImplementation*) impl)->createNewObject();
}

/*
 *	FactoryObjectHelper
 */

FactoryObjectHelper* FactoryObjectHelper::staticInitializer = FactoryObjectHelper::instance();

FactoryObjectHelper::FactoryObjectHelper() {
	className = "FactoryObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void FactoryObjectHelper::finalizeHelper() {
	FactoryObjectHelper::finalize();
}

DistributedObject* FactoryObjectHelper::instantiateObject() {
	return new FactoryObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* FactoryObjectHelper::instantiateServant() {
	return new FactoryObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* FactoryObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FactoryObjectAdapter((FactoryObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}


/*
 *	server/zone/objects/tangible/terminal/ticketcollector/TicketCollector.cpp generated by engine3 IDL compiler 0.60
 */

#include "TicketCollector.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/tangible/ticket/TicketObject.h"

#include "server/zone/objects/creature/shuttle/ShuttleCreature.h"

/*
 *	TicketCollectorStub
 */

TicketCollector::TicketCollector() : Terminal(DummyConstructorParameter::instance()) {
	_impl = new TicketCollectorImplementation();
	_impl->_setStub(this);
}

TicketCollector::TicketCollector(DummyConstructorParameter* param) : Terminal(param) {
}

TicketCollector::~TicketCollector() {
}


void TicketCollector::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((TicketCollectorImplementation*) _impl)->initializeTransientMembers();
}

int TicketCollector::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return ((TicketCollectorImplementation*) _impl)->handleObjectMenuSelect(player, selectedID);
}

void TicketCollector::useTicket(PlayerCreature* player, TicketObject* ticket) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);
		method.addObjectParameter(ticket);

		method.executeWithVoidReturn();
	} else
		((TicketCollectorImplementation*) _impl)->useTicket(player, ticket);
}

bool TicketCollector::checkTime(ShuttleCreature* shuttle, PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(shuttle);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else
		return ((TicketCollectorImplementation*) _impl)->checkTime(shuttle, player);
}

bool TicketCollector::isTicketCollector() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithBooleanReturn();
	} else
		return ((TicketCollectorImplementation*) _impl)->isTicketCollector();
}

void TicketCollector::setShuttle(ShuttleCreature* shut) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(shut);

		method.executeWithVoidReturn();
	} else
		((TicketCollectorImplementation*) _impl)->setShuttle(shut);
}

/*
 *	TicketCollectorImplementation
 */

TicketCollectorImplementation::TicketCollectorImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


TicketCollectorImplementation::~TicketCollectorImplementation() {
}


void TicketCollectorImplementation::finalize() {
}

void TicketCollectorImplementation::_initializeImplementation() {
	_setClassHelper(TicketCollectorHelper::instance());

	_serializationHelperMethod();
}

void TicketCollectorImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (TicketCollector*) stub;
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* TicketCollectorImplementation::_getStub() {
	return _this;
}

TicketCollectorImplementation::operator const TicketCollector*() {
	return _this;
}

void TicketCollectorImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void TicketCollectorImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void TicketCollectorImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void TicketCollectorImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void TicketCollectorImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void TicketCollectorImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void TicketCollectorImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void TicketCollectorImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("TicketCollector");

	addSerializableVariable("shuttle", &shuttle);
}

TicketCollectorImplementation::TicketCollectorImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/ticketcollector/TicketCollector.idl(59):  		Logger.setLoggingName("TicketCollector");
	Logger::setLoggingName("TicketCollector");
}

void TicketCollectorImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/terminal/ticketcollector/TicketCollector.idl(63):  		super.initializeTransientMembers();
	TerminalImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/terminal/ticketcollector/TicketCollector.idl(65):  		Logger.setLoggingName("TicketCollector");
	Logger::setLoggingName("TicketCollector");
}

bool TicketCollectorImplementation::isTicketCollector() {
	// server/zone/objects/tangible/terminal/ticketcollector/TicketCollector.idl(81):  		return true;
	return true;
}

void TicketCollectorImplementation::setShuttle(ShuttleCreature* shut) {
	// server/zone/objects/tangible/terminal/ticketcollector/TicketCollector.idl(85):  		shuttle = shut;
	shuttle = shut;
}

/*
 *	TicketCollectorAdapter
 */

TicketCollectorAdapter::TicketCollectorAdapter(TicketCollectorImplementation* obj) : TerminalAdapter(obj) {
}

Packet* TicketCollectorAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 8:
		useTicket((PlayerCreature*) inv->getObjectParameter(), (TicketObject*) inv->getObjectParameter());
		break;
	case 9:
		resp->insertBoolean(checkTime((ShuttleCreature*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter()));
		break;
	case 10:
		resp->insertBoolean(isTicketCollector());
		break;
	case 11:
		setShuttle((ShuttleCreature*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void TicketCollectorAdapter::initializeTransientMembers() {
	((TicketCollectorImplementation*) impl)->initializeTransientMembers();
}

int TicketCollectorAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((TicketCollectorImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void TicketCollectorAdapter::useTicket(PlayerCreature* player, TicketObject* ticket) {
	((TicketCollectorImplementation*) impl)->useTicket(player, ticket);
}

bool TicketCollectorAdapter::checkTime(ShuttleCreature* shuttle, PlayerCreature* player) {
	return ((TicketCollectorImplementation*) impl)->checkTime(shuttle, player);
}

bool TicketCollectorAdapter::isTicketCollector() {
	return ((TicketCollectorImplementation*) impl)->isTicketCollector();
}

void TicketCollectorAdapter::setShuttle(ShuttleCreature* shut) {
	((TicketCollectorImplementation*) impl)->setShuttle(shut);
}

/*
 *	TicketCollectorHelper
 */

TicketCollectorHelper* TicketCollectorHelper::staticInitializer = TicketCollectorHelper::instance();

TicketCollectorHelper::TicketCollectorHelper() {
	className = "TicketCollector";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void TicketCollectorHelper::finalizeHelper() {
	TicketCollectorHelper::finalize();
}

DistributedObject* TicketCollectorHelper::instantiateObject() {
	return new TicketCollector(DummyConstructorParameter::instance());
}

DistributedObjectServant* TicketCollectorHelper::instantiateServant() {
	return new TicketCollectorImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* TicketCollectorHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TicketCollectorAdapter((TicketCollectorImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}


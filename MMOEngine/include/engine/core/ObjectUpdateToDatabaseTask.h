/*
 * ObjectSaveToDatabaseTask.h
 *
 *  Created on: 16/08/2009
 *      Author: victor
 */

#ifndef OBJECTSAVETODATABASETASK_H_
#define OBJECTSAVETODATABASETASK_H_

#include "Task.h"
#include "ManagedWeakReference.h"

namespace engine {
  namespace core {

    class ManagedObject;

	class ObjectUpdateToDatabaseTask : public Task {
		ManagedWeakReference<ManagedObject*> object;

	public:
		ObjectUpdateToDatabaseTask(ManagedObject* object);

		void run();
	};

  } // namespace core
} // namespace engine

using namespace engine::core;

#endif /* OBJECTSAVETODATABASETASK_H_ */
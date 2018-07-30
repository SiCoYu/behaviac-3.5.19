/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Tencent is pleased to support the open source community by making behaviac available.
//
// Copyright (C) 2015 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with
// the License. You may obtain a copy of the License at http://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and limitations under the License.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "behaviac/base/base.h"
#include "behaviac/behaviortree/nodes/conditions/false.h"

namespace behaviac
{
    False::False()
    {}

    False::~False()
    {}

    void False::load(int version, const char* agentType, const properties_t& properties)
    {
        super::load(version, agentType, properties);
    }

    bool False::IsValid(Agent* pAgent, BehaviorTask* pTask) const
    {
        if (!False::DynamicCast(pTask->GetNode()))
        {
            return false;
        }

        return super::IsValid(pAgent, pTask);
    }

    BehaviorTask* False::createTask() const
    {
        FalseTask* pTask = BEHAVIAC_NEW FalseTask();

        return pTask;
    }

    void FalseTask::copyto(BehaviorTask* target) const
    {
        super::copyto(target);
    }

    void FalseTask::save(ISerializableNode* node) const
    {
        super::save(node);
    }

    void FalseTask::load(ISerializableNode* node)
    {
        super::load(node);
    }

    EBTStatus FalseTask::update(Agent* pAgent, EBTStatus childStatus)
    {
        BEHAVIAC_UNUSED_VAR(pAgent);
        BEHAVIAC_UNUSED_VAR(childStatus);

        return BT_FAILURE;
    }
}

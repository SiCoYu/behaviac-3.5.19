#include "generated_behaviors_3.h"

namespace behaviac
{
	// Source file: node_test/decoration_frames_ut_0

	class DecoratorFrames_bt_node_test_decoration_frames_ut_0_node1 : public DecoratorFrames
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorFrames_bt_node_test_decoration_frames_ut_0_node1, DecoratorFrames);
		DecoratorFrames_bt_node_test_decoration_frames_ut_0_node1()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
		virtual int GetFrames(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 100;
		}
	};

	class Action_bt_node_test_decoration_frames_ut_0_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_frames_ut_0_node2, Action);
		Action_bt_node_test_decoration_frames_ut_0_node2()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_decoration_frames_ut_0_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_frames_ut_0_node3, Action);
		Action_bt_node_test_decoration_frames_ut_0_node3()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_decoration_frames_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/decoration_frames_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					DecoratorFrames_bt_node_test_decoration_frames_ut_0_node1* node1 = BEHAVIAC_NEW DecoratorFrames_bt_node_test_decoration_frames_ut_0_node1;
					node1->SetClassNameString("DecoratorFrames");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					{
						Action_bt_node_test_decoration_frames_ut_0_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_decoration_frames_ut_0_node2;
						node2->SetClassNameString("Action");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node2);
						node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_decoration_frames_ut_0_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_decoration_frames_ut_0_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/decoration_log_ut_0

	class DecoratorLog_bt_node_test_decoration_log_ut_0_node1 : public DecoratorLog
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLog_bt_node_test_decoration_log_ut_0_node1, DecoratorLog);
		DecoratorLog_bt_node_test_decoration_log_ut_0_node1()
		{
			m_bDecorateWhenChildEnds = false;
			m_message = "This is a log node message 0! Child status is SUCCESS.";
		}
	protected:
	};

	class Action_bt_node_test_decoration_log_ut_0_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_log_ut_0_node2, Action);
		Action_bt_node_test_decoration_log_ut_0_node2()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_decoration_log_ut_0_node8 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_log_ut_0_node8, Action);
		Action_bt_node_test_decoration_log_ut_0_node8()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class DecoratorLog_bt_node_test_decoration_log_ut_0_node3 : public DecoratorLog
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLog_bt_node_test_decoration_log_ut_0_node3, DecoratorLog);
		DecoratorLog_bt_node_test_decoration_log_ut_0_node3()
		{
			m_bDecorateWhenChildEnds = false;
			m_message = "This is a log node message 1! Child status is FAILURE.";
		}
	protected:
	};

	class Action_bt_node_test_decoration_log_ut_0_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_log_ut_0_node4, Action);
		Action_bt_node_test_decoration_log_ut_0_node4()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_1, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_decoration_log_ut_0_node9 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_log_ut_0_node9, Action);
		Action_bt_node_test_decoration_log_ut_0_node9()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_1, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class DecoratorLog_bt_node_test_decoration_log_ut_0_node10 : public DecoratorLog
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLog_bt_node_test_decoration_log_ut_0_node10, DecoratorLog);
		DecoratorLog_bt_node_test_decoration_log_ut_0_node10()
		{
			m_bDecorateWhenChildEnds = false;
			m_message = "This is a log node message 1! Child status is RUNNING.";
		}
	protected:
	};

	class Action_bt_node_test_decoration_log_ut_0_node12 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_log_ut_0_node12, Action);
		Action_bt_node_test_decoration_log_ut_0_node12()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_2, void, float >(method_p0);
			return BT_RUNNING;
		}
		float method_p0;
	};

	class Action_bt_node_test_decoration_log_ut_0_node11 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_log_ut_0_node11, Action);
		Action_bt_node_test_decoration_log_ut_0_node11()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_2, void, float >(method_p0);
			return BT_SUCCESS;
		}
		float method_p0;
	};

		bool bt_node_test_decoration_log_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/decoration_log_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Selector* node5 = BEHAVIAC_NEW Selector;
					node5->SetClassNameString("Selector");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					{
						DecoratorLog_bt_node_test_decoration_log_ut_0_node1* node1 = BEHAVIAC_NEW DecoratorLog_bt_node_test_decoration_log_ut_0_node1;
						node1->SetClassNameString("DecoratorLog");
						node1->SetId(1);
#if !BEHAVIAC_RELEASE
						node1->SetAgentType("AgentNodeTest");
#endif
						node5->AddChild(node1);
						{
							Action_bt_node_test_decoration_log_ut_0_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_decoration_log_ut_0_node2;
							node2->SetClassNameString("Action");
							node2->SetId(2);
#if !BEHAVIAC_RELEASE
							node2->SetAgentType("AgentNodeTest");
#endif
							node1->AddChild(node2);
							node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
						}
						node5->SetHasEvents(node5->HasEvents() | node1->HasEvents());
					}
					{
						Action_bt_node_test_decoration_log_ut_0_node8* node8 = BEHAVIAC_NEW Action_bt_node_test_decoration_log_ut_0_node8;
						node8->SetClassNameString("Action");
						node8->SetId(8);
#if !BEHAVIAC_RELEASE
						node8->SetAgentType("AgentNodeTest");
#endif
						node5->AddChild(node8);
						node5->SetHasEvents(node5->HasEvents() | node8->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				{
					Selector* node6 = BEHAVIAC_NEW Selector;
					node6->SetClassNameString("Selector");
					node6->SetId(6);
#if !BEHAVIAC_RELEASE
					node6->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node6);
					{
						DecoratorLog_bt_node_test_decoration_log_ut_0_node3* node3 = BEHAVIAC_NEW DecoratorLog_bt_node_test_decoration_log_ut_0_node3;
						node3->SetClassNameString("DecoratorLog");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node6->AddChild(node3);
						{
							Action_bt_node_test_decoration_log_ut_0_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_decoration_log_ut_0_node4;
							node4->SetClassNameString("Action");
							node4->SetId(4);
#if !BEHAVIAC_RELEASE
							node4->SetAgentType("AgentNodeTest");
#endif
							node3->AddChild(node4);
							node3->SetHasEvents(node3->HasEvents() | node4->HasEvents());
						}
						node6->SetHasEvents(node6->HasEvents() | node3->HasEvents());
					}
					{
						Action_bt_node_test_decoration_log_ut_0_node9* node9 = BEHAVIAC_NEW Action_bt_node_test_decoration_log_ut_0_node9;
						node9->SetClassNameString("Action");
						node9->SetId(9);
#if !BEHAVIAC_RELEASE
						node9->SetAgentType("AgentNodeTest");
#endif
						node6->AddChild(node9);
						node6->SetHasEvents(node6->HasEvents() | node9->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node6->HasEvents());
				}
				{
					Selector* node7 = BEHAVIAC_NEW Selector;
					node7->SetClassNameString("Selector");
					node7->SetId(7);
#if !BEHAVIAC_RELEASE
					node7->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node7);
					{
						DecoratorLog_bt_node_test_decoration_log_ut_0_node10* node10 = BEHAVIAC_NEW DecoratorLog_bt_node_test_decoration_log_ut_0_node10;
						node10->SetClassNameString("DecoratorLog");
						node10->SetId(10);
#if !BEHAVIAC_RELEASE
						node10->SetAgentType("AgentNodeTest");
#endif
						node7->AddChild(node10);
						{
							Action_bt_node_test_decoration_log_ut_0_node12* node12 = BEHAVIAC_NEW Action_bt_node_test_decoration_log_ut_0_node12;
							node12->SetClassNameString("Action");
							node12->SetId(12);
#if !BEHAVIAC_RELEASE
							node12->SetAgentType("AgentNodeTest");
#endif
							node10->AddChild(node12);
							node10->SetHasEvents(node10->HasEvents() | node12->HasEvents());
						}
						node7->SetHasEvents(node7->HasEvents() | node10->HasEvents());
					}
					{
						Action_bt_node_test_decoration_log_ut_0_node11* node11 = BEHAVIAC_NEW Action_bt_node_test_decoration_log_ut_0_node11;
						node11->SetClassNameString("Action");
						node11->SetId(11);
#if !BEHAVIAC_RELEASE
						node11->SetAgentType("AgentNodeTest");
#endif
						node7->AddChild(node11);
						node7->SetHasEvents(node7->HasEvents() | node11->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node7->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/decoration_loopuntil_ut_0

	class Action_bt_node_test_decoration_loopuntil_ut_0_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_loopuntil_ut_0_node4, Action);
		Action_bt_node_test_decoration_loopuntil_ut_0_node4()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_0_node1 : public DecoratorLoopUntil
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_0_node1, DecoratorLoopUntil);
		DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_0_node1()
		{
			m_bDecorateWhenChildEnds = true;
			m_until = true;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return -1;
		}
	};

	class DecoratorLoop_bt_node_test_decoration_loopuntil_ut_0_node2 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_node_test_decoration_loopuntil_ut_0_node2, DecoratorLoop);
		DecoratorLoop_bt_node_test_decoration_loopuntil_ut_0_node2()
		{
			m_bDecorateWhenChildEnds = true;
			m_bDoneWithinFrame = false;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 100;
		}
	};

	class Action_bt_node_test_decoration_loopuntil_ut_0_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_loopuntil_ut_0_node3, Action);
		Action_bt_node_test_decoration_loopuntil_ut_0_node3()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_decoration_loopuntil_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/decoration_loopuntil_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_decoration_loopuntil_ut_0_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_decoration_loopuntil_ut_0_node4;
					node4->SetClassNameString("Action");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_0_node1* node1 = BEHAVIAC_NEW DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_0_node1;
					node1->SetClassNameString("DecoratorLoopUntil");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					{
						DecoratorLoop_bt_node_test_decoration_loopuntil_ut_0_node2* node2 = BEHAVIAC_NEW DecoratorLoop_bt_node_test_decoration_loopuntil_ut_0_node2;
						node2->SetClassNameString("DecoratorLoop");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node2);
						{
							True* node5 = BEHAVIAC_NEW True;
							node5->SetClassNameString("True");
							node5->SetId(5);
#if !BEHAVIAC_RELEASE
							node5->SetAgentType("AgentNodeTest");
#endif
							node2->AddChild(node5);
							node2->SetHasEvents(node2->HasEvents() | node5->HasEvents());
						}
						node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_decoration_loopuntil_ut_0_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_decoration_loopuntil_ut_0_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/decoration_loopuntil_ut_1

	class Action_bt_node_test_decoration_loopuntil_ut_1_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_loopuntil_ut_1_node4, Action);
		Action_bt_node_test_decoration_loopuntil_ut_1_node4()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_1_node1 : public DecoratorLoopUntil
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_1_node1, DecoratorLoopUntil);
		DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_1_node1()
		{
			m_bDecorateWhenChildEnds = true;
			m_until = false;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 5;
		}
	};

	class DecoratorLoop_bt_node_test_decoration_loopuntil_ut_1_node2 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_node_test_decoration_loopuntil_ut_1_node2, DecoratorLoop);
		DecoratorLoop_bt_node_test_decoration_loopuntil_ut_1_node2()
		{
			m_bDecorateWhenChildEnds = true;
			m_bDoneWithinFrame = false;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 10;
		}
	};

	class Action_bt_node_test_decoration_loopuntil_ut_1_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_loopuntil_ut_1_node3, Action);
		Action_bt_node_test_decoration_loopuntil_ut_1_node3()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_decoration_loopuntil_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/decoration_loopuntil_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_decoration_loopuntil_ut_1_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_decoration_loopuntil_ut_1_node4;
					node4->SetClassNameString("Action");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_1_node1* node1 = BEHAVIAC_NEW DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_1_node1;
					node1->SetClassNameString("DecoratorLoopUntil");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					{
						DecoratorLoop_bt_node_test_decoration_loopuntil_ut_1_node2* node2 = BEHAVIAC_NEW DecoratorLoop_bt_node_test_decoration_loopuntil_ut_1_node2;
						node2->SetClassNameString("DecoratorLoop");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node2);
						{
							True* node5 = BEHAVIAC_NEW True;
							node5->SetClassNameString("True");
							node5->SetId(5);
#if !BEHAVIAC_RELEASE
							node5->SetAgentType("AgentNodeTest");
#endif
							node2->AddChild(node5);
							node2->SetHasEvents(node2->HasEvents() | node5->HasEvents());
						}
						node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_decoration_loopuntil_ut_1_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_decoration_loopuntil_ut_1_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/decoration_loopuntil_ut_2

	class Action_bt_node_test_decoration_loopuntil_ut_2_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_loopuntil_ut_2_node4, Action);
		Action_bt_node_test_decoration_loopuntil_ut_2_node4()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_2_node1 : public DecoratorLoopUntil
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_2_node1, DecoratorLoopUntil);
		DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_2_node1()
		{
			m_bDecorateWhenChildEnds = true;
			m_until = true;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 50;
		}
	};

	class DecoratorAlwaysFailure_bt_node_test_decoration_loopuntil_ut_2_node6 : public DecoratorAlwaysFailure
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorAlwaysFailure_bt_node_test_decoration_loopuntil_ut_2_node6, DecoratorAlwaysFailure);
		DecoratorAlwaysFailure_bt_node_test_decoration_loopuntil_ut_2_node6()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
	};

	class Action_bt_node_test_decoration_loopuntil_ut_2_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_loopuntil_ut_2_node3, Action);
		Action_bt_node_test_decoration_loopuntil_ut_2_node3()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_decoration_loopuntil_ut_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/decoration_loopuntil_ut_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_decoration_loopuntil_ut_2_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_decoration_loopuntil_ut_2_node4;
					node4->SetClassNameString("Action");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_2_node1* node1 = BEHAVIAC_NEW DecoratorLoopUntil_bt_node_test_decoration_loopuntil_ut_2_node1;
					node1->SetClassNameString("DecoratorLoopUntil");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					{
						DecoratorAlwaysFailure_bt_node_test_decoration_loopuntil_ut_2_node6* node6 = BEHAVIAC_NEW DecoratorAlwaysFailure_bt_node_test_decoration_loopuntil_ut_2_node6;
						node6->SetClassNameString("DecoratorAlwaysFailure");
						node6->SetId(6);
#if !BEHAVIAC_RELEASE
						node6->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node6);
						{
							True* node5 = BEHAVIAC_NEW True;
							node5->SetClassNameString("True");
							node5->SetId(5);
#if !BEHAVIAC_RELEASE
							node5->SetAgentType("AgentNodeTest");
#endif
							node6->AddChild(node5);
							node6->SetHasEvents(node6->HasEvents() | node5->HasEvents());
						}
						node1->SetHasEvents(node1->HasEvents() | node6->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_decoration_loopuntil_ut_2_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_decoration_loopuntil_ut_2_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/decoration_loop_ut_0

	class DecoratorLoop_bt_node_test_decoration_loop_ut_0_node0 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_node_test_decoration_loop_ut_0_node0, DecoratorLoop);
		DecoratorLoop_bt_node_test_decoration_loop_ut_0_node0()
		{
			m_bDecorateWhenChildEnds = true;
			m_bDoneWithinFrame = false;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return -1;
		}
	};

	class Action_bt_node_test_decoration_loop_ut_0_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_loop_ut_0_node3, Action);
		Action_bt_node_test_decoration_loop_ut_0_node3()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_decoration_loop_ut_0_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_loop_ut_0_node2, Action);
		Action_bt_node_test_decoration_loop_ut_0_node2()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_decoration_loop_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/decoration_loop_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node1 = BEHAVIAC_NEW Sequence;
				node1->SetClassNameString("Sequence");
				node1->SetId(1);
#if !BEHAVIAC_RELEASE
				node1->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node1);
				{
					DecoratorLoop_bt_node_test_decoration_loop_ut_0_node0* node0 = BEHAVIAC_NEW DecoratorLoop_bt_node_test_decoration_loop_ut_0_node0;
					node0->SetClassNameString("DecoratorLoop");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node1->AddChild(node0);
					{
						Action_bt_node_test_decoration_loop_ut_0_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_decoration_loop_ut_0_node3;
						node3->SetClassNameString("Action");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node3);
						node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
					}
					node1->SetHasEvents(node1->HasEvents() | node0->HasEvents());
				}
				{
					Action_bt_node_test_decoration_loop_ut_0_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_decoration_loop_ut_0_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node1->AddChild(node2);
					node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node1->HasEvents());
			}
			return true;
		}

	// Source file: node_test/decoration_loop_ut_1

	class DecoratorLoop_bt_node_test_decoration_loop_ut_1_node0 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_node_test_decoration_loop_ut_1_node0, DecoratorLoop);
		DecoratorLoop_bt_node_test_decoration_loop_ut_1_node0()
		{
			m_bDecorateWhenChildEnds = true;
			m_bDoneWithinFrame = false;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 500;
		}
	};

	class Action_bt_node_test_decoration_loop_ut_1_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_loop_ut_1_node3, Action);
		Action_bt_node_test_decoration_loop_ut_1_node3()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_decoration_loop_ut_1_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_loop_ut_1_node2, Action);
		Action_bt_node_test_decoration_loop_ut_1_node2()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_decoration_loop_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/decoration_loop_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node1 = BEHAVIAC_NEW Sequence;
				node1->SetClassNameString("Sequence");
				node1->SetId(1);
#if !BEHAVIAC_RELEASE
				node1->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node1);
				{
					DecoratorLoop_bt_node_test_decoration_loop_ut_1_node0* node0 = BEHAVIAC_NEW DecoratorLoop_bt_node_test_decoration_loop_ut_1_node0;
					node0->SetClassNameString("DecoratorLoop");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node1->AddChild(node0);
					{
						Action_bt_node_test_decoration_loop_ut_1_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_decoration_loop_ut_1_node3;
						node3->SetClassNameString("Action");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node3);
						node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
					}
					node1->SetHasEvents(node1->HasEvents() | node0->HasEvents());
				}
				{
					Action_bt_node_test_decoration_loop_ut_1_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_decoration_loop_ut_1_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node1->AddChild(node2);
					node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node1->HasEvents());
			}
			return true;
		}

	// Source file: node_test/decoration_not_ut_0

	class DecoratorNot_bt_node_test_decoration_not_ut_0_node1 : public DecoratorNot
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorNot_bt_node_test_decoration_not_ut_0_node1, DecoratorNot);
		DecoratorNot_bt_node_test_decoration_not_ut_0_node1()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
	};

	class Action_bt_node_test_decoration_not_ut_0_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_not_ut_0_node2, Action);
		Action_bt_node_test_decoration_not_ut_0_node2()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_FAILURE;
		}
		int method_p0;
	};

	class Action_bt_node_test_decoration_not_ut_0_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_not_ut_0_node3, Action);
		Action_bt_node_test_decoration_not_ut_0_node3()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_decoration_not_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/decoration_not_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					DecoratorNot_bt_node_test_decoration_not_ut_0_node1* node1 = BEHAVIAC_NEW DecoratorNot_bt_node_test_decoration_not_ut_0_node1;
					node1->SetClassNameString("DecoratorNot");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					{
						Action_bt_node_test_decoration_not_ut_0_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_decoration_not_ut_0_node2;
						node2->SetClassNameString("Action");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node2);
						node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_decoration_not_ut_0_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_decoration_not_ut_0_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/decoration_not_ut_1

	class DecoratorNot_bt_node_test_decoration_not_ut_1_node1 : public DecoratorNot
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorNot_bt_node_test_decoration_not_ut_1_node1, DecoratorNot);
		DecoratorNot_bt_node_test_decoration_not_ut_1_node1()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
	};

	class Action_bt_node_test_decoration_not_ut_1_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_not_ut_1_node2, Action);
		Action_bt_node_test_decoration_not_ut_1_node2()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

	class Action_bt_node_test_decoration_not_ut_1_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_not_ut_1_node3, Action);
		Action_bt_node_test_decoration_not_ut_1_node3()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_decoration_not_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/decoration_not_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					DecoratorNot_bt_node_test_decoration_not_ut_1_node1* node1 = BEHAVIAC_NEW DecoratorNot_bt_node_test_decoration_not_ut_1_node1;
					node1->SetClassNameString("DecoratorNot");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					{
						Action_bt_node_test_decoration_not_ut_1_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_decoration_not_ut_1_node2;
						node2->SetClassNameString("Action");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node2);
						node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_decoration_not_ut_1_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_decoration_not_ut_1_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/decoration_not_ut_2

	class DecoratorNot_bt_node_test_decoration_not_ut_2_node1 : public DecoratorNot
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorNot_bt_node_test_decoration_not_ut_2_node1, DecoratorNot);
		DecoratorNot_bt_node_test_decoration_not_ut_2_node1()
		{
			m_bDecorateWhenChildEnds = false;
		}
	protected:
	};

	class Action_bt_node_test_decoration_not_ut_2_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_not_ut_2_node2, Action);
		Action_bt_node_test_decoration_not_ut_2_node2()
		{
			method_p0 = 0;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_RUNNING;
		}
		int method_p0;
	};

	class Action_bt_node_test_decoration_not_ut_2_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_decoration_not_ut_2_node3, Action);
		Action_bt_node_test_decoration_not_ut_2_node3()
		{
			method_p0 = 1;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
		int method_p0;
	};

		bool bt_node_test_decoration_not_ut_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/decoration_not_ut_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					DecoratorNot_bt_node_test_decoration_not_ut_2_node1* node1 = BEHAVIAC_NEW DecoratorNot_bt_node_test_decoration_not_ut_2_node1;
					node1->SetClassNameString("DecoratorNot");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					{
						Action_bt_node_test_decoration_not_ut_2_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_decoration_not_ut_2_node2;
						node2->SetClassNameString("Action");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node2);
						node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_decoration_not_ut_2_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_decoration_not_ut_2_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/decoration_successuntil_ut_0

	class DecoratorSuccessUntil_bt_node_test_decoration_successuntil_ut_0_node0 : public DecoratorSuccessUntil
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorSuccessUntil_bt_node_test_decoration_successuntil_ut_0_node0, DecoratorSuccessUntil);
		DecoratorSuccessUntil_bt_node_test_decoration_successuntil_ut_0_node0()
		{
			m_bDecorateWhenChildEnds = true;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return -1;
		}
	};

		bool bt_node_test_decoration_successuntil_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/decoration_successuntil_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				DecoratorSuccessUntil_bt_node_test_decoration_successuntil_ut_0_node0* node0 = BEHAVIAC_NEW DecoratorSuccessUntil_bt_node_test_decoration_successuntil_ut_0_node0;
				node0->SetClassNameString("DecoratorSuccessUntil");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					False* node1 = BEHAVIAC_NEW False;
					node1->SetClassNameString("False");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/decoration_successuntil_ut_1

	class DecoratorSuccessUntil_bt_node_test_decoration_successuntil_ut_1_node0 : public DecoratorSuccessUntil
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorSuccessUntil_bt_node_test_decoration_successuntil_ut_1_node0, DecoratorSuccessUntil);
		DecoratorSuccessUntil_bt_node_test_decoration_successuntil_ut_1_node0()
		{
			m_bDecorateWhenChildEnds = true;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 5;
		}
	};

		bool bt_node_test_decoration_successuntil_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/decoration_successuntil_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				DecoratorSuccessUntil_bt_node_test_decoration_successuntil_ut_1_node0* node0 = BEHAVIAC_NEW DecoratorSuccessUntil_bt_node_test_decoration_successuntil_ut_1_node0;
				node0->SetClassNameString("DecoratorSuccessUntil");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					False* node1 = BEHAVIAC_NEW False;
					node1->SetClassNameString("False");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/enter_exit_action_ut_0

	class Precondition_bt_node_test_enter_exit_action_ut_0_attach1 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_enter_exit_action_ut_0_attach1, Precondition);
		Precondition_bt_node_test_enter_exit_action_ut_0_attach1()
		{
			opl_p0 = 0;
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			bool opl = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_enter_action_1, bool, float >(opl_p0);
			bool opr2 = true;
			bool op = Details::Equal(opl, opr2);
			if (!op)
				result = BT_FAILURE;
			return result;
		}
		float opl_p0;
	};

	class Effector_bt_node_test_enter_exit_action_ut_0_attach2 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_enter_exit_action_ut_0_attach2, Effector);
		Effector_bt_node_test_enter_exit_action_ut_0_attach2()
		{
			opl_p0 = 0;
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_exit_action_1, void, float >(opl_p0);
			return result;
		}
		float opl_p0;
	};

	class Precondition_bt_node_test_enter_exit_action_ut_0_attach3 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_enter_exit_action_ut_0_attach3, Precondition);
		Precondition_bt_node_test_enter_exit_action_ut_0_attach3()
		{
			opl_p0 = 0;
			opl_p1 = (char*)("enter_test");
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			bool opl = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_enter_action_2, bool, int, behaviac::string >(opl_p0, opl_p1);
			bool opr2 = true;
			bool op = Details::Equal(opl, opr2);
			if (!op)
				result = BT_FAILURE;
			return result;
		}
		int opl_p0;
		behaviac::string opl_p1;
	};

	class Effector_bt_node_test_enter_exit_action_ut_0_attach4 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_enter_exit_action_ut_0_attach4, Effector);
		Effector_bt_node_test_enter_exit_action_ut_0_attach4()
		{
			opl_p0 = 0;
			opl_p1 = (char*)("exit_test");
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_exit_action_2, void, int, behaviac::string >(opl_p0, opl_p1);
			return result;
		}
		int opl_p0;
		behaviac::string opl_p1;
	};

	class Condition_bt_node_test_enter_exit_action_ut_0_node5 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_enter_exit_action_ut_0_node5, Condition);
		Condition_bt_node_test_enter_exit_action_ut_0_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

		bool bt_node_test_enter_exit_action_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/enter_exit_action_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				// attachments
				{
					Precondition_bt_node_test_enter_exit_action_ut_0_attach1* attach1 = BEHAVIAC_NEW Precondition_bt_node_test_enter_exit_action_ut_0_attach1;
					attach1->SetClassNameString("Precondition");
					attach1->SetId(1);
#if !BEHAVIAC_RELEASE
					attach1->SetAgentType("AgentNodeTest");
#endif
					node0->Attach(attach1, true, false, false);
					node0->SetHasEvents(node0->HasEvents() | (Event::DynamicCast(attach1) != 0));
				}
				{
					Effector_bt_node_test_enter_exit_action_ut_0_attach2* attach2 = BEHAVIAC_NEW Effector_bt_node_test_enter_exit_action_ut_0_attach2;
					attach2->SetClassNameString("Effector");
					attach2->SetId(2);
#if !BEHAVIAC_RELEASE
					attach2->SetAgentType("AgentNodeTest");
#endif
					node0->Attach(attach2, false, true, false);
					node0->SetHasEvents(node0->HasEvents() | (Event::DynamicCast(attach2) != 0));
				}
				pBT->AddChild(node0);
				{
					Selector* node6 = BEHAVIAC_NEW Selector;
					node6->SetClassNameString("Selector");
					node6->SetId(6);
#if !BEHAVIAC_RELEASE
					node6->SetAgentType("AgentNodeTest");
#endif
					// attachments
					{
						Precondition_bt_node_test_enter_exit_action_ut_0_attach3* attach3 = BEHAVIAC_NEW Precondition_bt_node_test_enter_exit_action_ut_0_attach3;
						attach3->SetClassNameString("Precondition");
						attach3->SetId(3);
#if !BEHAVIAC_RELEASE
						attach3->SetAgentType("AgentNodeTest");
#endif
						node6->Attach(attach3, true, false, false);
						node6->SetHasEvents(node6->HasEvents() | (Event::DynamicCast(attach3) != 0));
					}
					{
						Effector_bt_node_test_enter_exit_action_ut_0_attach4* attach4 = BEHAVIAC_NEW Effector_bt_node_test_enter_exit_action_ut_0_attach4;
						attach4->SetClassNameString("Effector");
						attach4->SetId(4);
#if !BEHAVIAC_RELEASE
						attach4->SetAgentType("AgentNodeTest");
#endif
						node6->Attach(attach4, false, true, false);
						node6->SetHasEvents(node6->HasEvents() | (Event::DynamicCast(attach4) != 0));
					}
					node0->AddChild(node6);
					{
						WaitforSignal* node7 = BEHAVIAC_NEW WaitforSignal;
						node7->SetClassNameString("WaitforSignal");
						node7->SetId(7);
#if !BEHAVIAC_RELEASE
						node7->SetAgentType("AgentNodeTest");
#endif
						node6->AddChild(node7);
						{
							Condition_bt_node_test_enter_exit_action_ut_0_node5* node5 = BEHAVIAC_NEW Condition_bt_node_test_enter_exit_action_ut_0_node5;
							node5->SetClassNameString("Condition");
							node5->SetId(5);
#if !BEHAVIAC_RELEASE
							node5->SetAgentType("AgentNodeTest");
#endif
							node7->SetCustomCondition(node5);
							node7->SetHasEvents(node7->HasEvents() | node5->HasEvents());
						}
						node6->SetHasEvents(node6->HasEvents() | node7->HasEvents());
					}
					{
						True* node8 = BEHAVIAC_NEW True;
						node8->SetClassNameString("True");
						node8->SetId(8);
#if !BEHAVIAC_RELEASE
						node8->SetAgentType("AgentNodeTest");
#endif
						node6->AddChild(node8);
						node6->SetHasEvents(node6->HasEvents() | node8->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node6->HasEvents());
				}
				{
					True* node9 = BEHAVIAC_NEW True;
					node9->SetClassNameString("True");
					node9->SetId(9);
#if !BEHAVIAC_RELEASE
					node9->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node9);
					node0->SetHasEvents(node0->HasEvents() | node9->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/enter_exit_action_ut_1

	class Parallel_bt_node_test_enter_exit_action_ut_1_node0 : public Parallel
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Parallel_bt_node_test_enter_exit_action_ut_1_node0, Parallel);
		Parallel_bt_node_test_enter_exit_action_ut_1_node0()
		{
			m_failPolicy = FAIL_ON_ONE;
			m_succeedPolicy = SUCCEED_ON_ALL;
			m_exitPolicy = EXIT_ABORT_RUNNINGSIBLINGS;
			m_childFinishPolicy = CHILDFINISH_LOOP;
		}
	protected:
	};

	class Precondition_bt_node_test_enter_exit_action_ut_1_attach1 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_enter_exit_action_ut_1_attach1, Precondition);
		Precondition_bt_node_test_enter_exit_action_ut_1_attach1()
		{
			opl_p0 = 0;
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			bool opl = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_enter_action_1, bool, float >(opl_p0);
			bool opr2 = true;
			bool op = Details::Equal(opl, opr2);
			if (!op)
				result = BT_FAILURE;
			return result;
		}
		float opl_p0;
	};

	class Effector_bt_node_test_enter_exit_action_ut_1_attach2 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_enter_exit_action_ut_1_attach2, Effector);
		Effector_bt_node_test_enter_exit_action_ut_1_attach2()
		{
			opl_p0 = 0;
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_exit_action_1, void, float >(opl_p0);
			return result;
		}
		float opl_p0;
	};

	class Precondition_bt_node_test_enter_exit_action_ut_1_attach4 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_enter_exit_action_ut_1_attach4, Precondition);
		Precondition_bt_node_test_enter_exit_action_ut_1_attach4()
		{
			opl_p0 = 3;
			opl_p1 = (char*)("hello");
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			bool opl = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_enter_action_2, bool, int, behaviac::string >(opl_p0, opl_p1);
			bool opr2 = true;
			bool op = Details::Equal(opl, opr2);
			if (!op)
				result = BT_FAILURE;
			return result;
		}
		int opl_p0;
		behaviac::string opl_p1;
	};

	class Effector_bt_node_test_enter_exit_action_ut_1_attach5 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_enter_exit_action_ut_1_attach5, Effector);
		Effector_bt_node_test_enter_exit_action_ut_1_attach5()
		{
			opl_p0 = 5;
			opl_p1 = (char*)("world");
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_exit_action_2, void, int, behaviac::string >(opl_p0, opl_p1);
			return result;
		}
		int opl_p0;
		behaviac::string opl_p1;
	};

	class Condition_bt_node_test_enter_exit_action_ut_1_node6 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_enter_exit_action_ut_1_node6, Condition);
		Condition_bt_node_test_enter_exit_action_ut_1_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

		bool bt_node_test_enter_exit_action_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/enter_exit_action_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Parallel_bt_node_test_enter_exit_action_ut_1_node0* node0 = BEHAVIAC_NEW Parallel_bt_node_test_enter_exit_action_ut_1_node0;
				node0->SetClassNameString("Parallel");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				// attachments
				{
					Precondition_bt_node_test_enter_exit_action_ut_1_attach1* attach1 = BEHAVIAC_NEW Precondition_bt_node_test_enter_exit_action_ut_1_attach1;
					attach1->SetClassNameString("Precondition");
					attach1->SetId(1);
#if !BEHAVIAC_RELEASE
					attach1->SetAgentType("AgentNodeTest");
#endif
					node0->Attach(attach1, true, false, false);
					node0->SetHasEvents(node0->HasEvents() | (Event::DynamicCast(attach1) != 0));
				}
				{
					Effector_bt_node_test_enter_exit_action_ut_1_attach2* attach2 = BEHAVIAC_NEW Effector_bt_node_test_enter_exit_action_ut_1_attach2;
					attach2->SetClassNameString("Effector");
					attach2->SetId(2);
#if !BEHAVIAC_RELEASE
					attach2->SetAgentType("AgentNodeTest");
#endif
					node0->Attach(attach2, false, true, false);
					node0->SetHasEvents(node0->HasEvents() | (Event::DynamicCast(attach2) != 0));
				}
				pBT->AddChild(node0);
				{
					WaitforSignal* node3 = BEHAVIAC_NEW WaitforSignal;
					node3->SetClassNameString("WaitforSignal");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					// attachments
					{
						Precondition_bt_node_test_enter_exit_action_ut_1_attach4* attach4 = BEHAVIAC_NEW Precondition_bt_node_test_enter_exit_action_ut_1_attach4;
						attach4->SetClassNameString("Precondition");
						attach4->SetId(4);
#if !BEHAVIAC_RELEASE
						attach4->SetAgentType("AgentNodeTest");
#endif
						node3->Attach(attach4, true, false, false);
						node3->SetHasEvents(node3->HasEvents() | (Event::DynamicCast(attach4) != 0));
					}
					{
						Effector_bt_node_test_enter_exit_action_ut_1_attach5* attach5 = BEHAVIAC_NEW Effector_bt_node_test_enter_exit_action_ut_1_attach5;
						attach5->SetClassNameString("Effector");
						attach5->SetId(5);
#if !BEHAVIAC_RELEASE
						attach5->SetAgentType("AgentNodeTest");
#endif
						node3->Attach(attach5, false, true, false);
						node3->SetHasEvents(node3->HasEvents() | (Event::DynamicCast(attach5) != 0));
					}
					node0->AddChild(node3);
					{
						Condition_bt_node_test_enter_exit_action_ut_1_node6* node6 = BEHAVIAC_NEW Condition_bt_node_test_enter_exit_action_ut_1_node6;
						node6->SetClassNameString("Condition");
						node6->SetId(6);
#if !BEHAVIAC_RELEASE
						node6->SetAgentType("AgentNodeTest");
#endif
						node3->SetCustomCondition(node6);
						node3->SetHasEvents(node3->HasEvents() | node6->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				{
					True* node7 = BEHAVIAC_NEW True;
					node7->SetClassNameString("True");
					node7->SetId(7);
#if !BEHAVIAC_RELEASE
					node7->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node7);
					node0->SetHasEvents(node0->HasEvents() | node7->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

}

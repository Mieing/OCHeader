@interface CGroupOpLog : NSObject

- (id)init;
- (BOOL)add_MemberSwitch:(id)a0 usrName:(id)a1 flag:(unsigned int)a2 open:(BOOL)a3 sync:(BOOL)a4;
- (unsigned int)start_QuitGroup:(id)a0 withUsrName:(id)a1;
- (BOOL)add_ModifyContact:(id)a0 chatBoxStatus:(BOOL)a1 sync:(BOOL)a2;
- (BOOL)add_ModifyNotifyNeedPushFlag:(id)a0 withNeedPushFlag:(unsigned int)a1 sync:(BOOL)a2;

@end

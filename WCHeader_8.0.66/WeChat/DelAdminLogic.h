@class NSString, CContact;
@protocol DelAdminLogicDelegate;

@interface DelAdminLogic : MMObject <RoomContactSelectDelegate, contactInfoDelegate, IGroupMgrExt> {
    BOOL m_bNeedReload;
}

@property (weak, nonatomic) id<DelAdminLogicDelegate> m_delegate;
@property (retain, nonatomic) CContact *m_roomContact;
@property (retain, nonatomic) CContact *m_adminContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)doDelAdmin;
- (void)delAdmin;
- (void)OnDelGroupAdmin:(id)a0 withResult:(unsigned int)a1 adminList:(id)a2 errTip:(id)a3;
- (void)onUpdateDeleteAdmin;
- (void).cxx_destruct;

@end

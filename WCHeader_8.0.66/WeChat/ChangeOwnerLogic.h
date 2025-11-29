@class NSString, CContact, RoomContactSelectViewController;
@protocol ChangeOwnerLogicDelegate;

@interface ChangeOwnerLogic : NSObject <RoomContactSelectDelegate, contactInfoDelegate, IGroupMgrExt> {
    RoomContactSelectViewController *m_vc;
    BOOL m_bNeedReload;
}

@property (weak, nonatomic) id<ChangeOwnerLogicDelegate> m_delegate;
@property (retain, nonatomic) CContact *m_oContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)onChangeOwner:(id)a0;
- (void)OnChangeChatRoomOwner:(id)a0 NewOwner:(id)a1 Success:(BOOL)a2;
- (void)didSelectContact:(id)a0;
- (void)onCancelSelectContact;
- (void).cxx_destruct;

@end

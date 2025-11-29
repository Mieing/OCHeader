@class RoomContactSelectViewController, NSString, CContact, NSMutableDictionary;
@protocol DelMemLogicDelegate;

@interface DelMemLogic : NSObject <RoomContactSelectDelegate, contactInfoDelegate, IGroupMgrExt> {
    RoomContactSelectViewController *m_vc;
    BOOL m_bNeedReload;
    NSMutableDictionary *m_dicWillDell;
}

@property (weak, nonatomic) id<DelMemLogicDelegate> m_delegate;
@property (retain, nonatomic) CContact *m_oContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)updateRightBtn;
- (void)doDelMember;
- (void)delMember;
- (void)OnDelGroupMember:(id)a0 withResult:(unsigned int)a1 memberList:(id)a2 errTip:(id)a3;
- (void)newMessageFromContactInfo:(id)a0;
- (void)didSelectContact:(id)a0;
- (void)onCancelSelectContact;
- (void)onViewContact:(id)a0;
- (void)makeCell:(id)a0 contact:(id)a1;
- (void).cxx_destruct;

@end

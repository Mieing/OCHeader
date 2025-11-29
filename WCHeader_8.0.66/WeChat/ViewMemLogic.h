@class AddMemLogic, NSString, CContact, RoomContactSelectViewController;
@protocol ViewMemLogicDelegate;

@interface ViewMemLogic : NSObject <RoomContactSelectDelegate, contactInfoDelegate, AddMemLogicDelegate, IGroupMgrExt> {
    AddMemLogic *m_addMemLogic;
    RoomContactSelectViewController *m_vc;
    BOOL m_bNeedReload;
}

@property (weak, nonatomic) id<ViewMemLogicDelegate> m_delegate;
@property (retain, nonatomic) CContact *m_oContact;
@property (nonatomic) BOOL m_bShowWithGrid;
@property (nonatomic) struct CGPoint { double x; double y; } m_bContentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)didReloadMemData;
- (Class)getCustomizationRoomContactSelectViewClass;
- (void)handleCustomizationRoomContactSelectView:(id)a0;
- (void)addMember;
- (void)onAddMemLogicStop:(BOOL)a0;
- (id)getViewController;
- (void)newMessageFromContactInfo:(id)a0;
- (void)roomContactSearchBarDidBecomeFirstResponse;
- (void)didSelectContact:(id)a0;
- (void)onCancelSelectContact;
- (void)didClickDelContact:(id)a0;
- (void)OnDelGroupMember:(id)a0 withResult:(unsigned int)a1 memberList:(id)a2 errTip:(id)a3;
- (void).cxx_destruct;

@end

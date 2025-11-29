@class MMLoadingView, NSString, NSDictionary, CContactVerifyLogic, UIView, NSMutableArray;
@protocol ContactsCreateChatRoomLogicDelegate;

@interface ContactsCreateChatRoomLogic : MMObject <contactVerifyLogicDelegate, IGroupMgrExt> {
    NSDictionary *m_dicMultiSelect;
    UIView *m_ParentView;
    MMLoadingView *m_loadingView;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSMutableArray *m_arrNeedVerifyUsrName;
}

@property (weak, nonatomic) id<ContactsCreateChatRoomLogicDelegate> m_Delegate;
@property (nonatomic) unsigned int m_uiUseChatState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reset;
- (BOOL)start:(id)a0 parentView:(id)a1;
- (void)startLoading;
- (void)stopLoading;
- (id)genMemerList;
- (BOOL)createChatRoom;
- (void)verifyContact;
- (id)getErrorContactName:(id)a0;
- (id)genErrorString:(id)a0 needVerify:(BOOL *)a1;
- (void)OnCreateGroup:(id)a0 withStatus:(int)a1 resp:(id)a2;
- (void)OnOpenIMCreateGroup:(id)a0 withStatus:(int)a1 resp:(id)a2;
- (id)genOpenIMErrorString:(id)a0 needVerify:(BOOL *)a1;
- (void).cxx_destruct;

@end

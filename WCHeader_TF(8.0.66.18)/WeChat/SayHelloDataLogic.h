@class NSString, NSMutableDictionary, CContactVerifyLogic, SendVerifyMsgLogicController, NSMutableArray;
@protocol SayHelloDataLogicDelegate;

@interface SayHelloDataLogic : MMObject <SendVerifyMsgViewControllerDelegate, FriendAsistSessionExt, ContactsItemViewDelegate, contactVerifyLogicDelegate, IAutoSetRemarkExt, IContactMgrExt> {
    unsigned int m_uiScene;
    NSMutableArray *m_arrHellos;
    NSMutableDictionary *m_dicSections;
    NSMutableDictionary *m_dicHellos;
    CContactVerifyLogic *m_oContactVerifyLogic;
    SendVerifyMsgLogicController *m_sendVerifylogicVC;
}

@property (weak, nonatomic) id<SayHelloDataLogicDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getContactFrom:(id)a0;

- (void)removeArrHello:(id)a0;
- (id)getContactForUserName:(id)a0;
- (id)getContactForIndex:(unsigned int)a0 Section:(unsigned int)a1;
- (void)loadData:(unsigned int)a0;
- (void)insetLatestHello:(id)a0;
- (id)getChatName:(unsigned int)a0;
- (void)clearMsg:(unsigned int)a0 ForIndex:(unsigned int)a1 Section:(unsigned int)a2;
- (void)clearMsg:(unsigned int)a0;
- (void)handleAddedContact:(id)a0;
- (void)onContactVerifyFail;
- (void)contactAddContactOk:(id)a0;
- (void)contactSendRequestOk:(id)a0;
- (void)onContactVerifyFillVerifyMsg:(id)a0;
- (void)verifyContact:(id)a0;
- (void)addContact:(id)a0;
- (unsigned int)getSectionCount;
- (unsigned int)getHelloCount:(unsigned long long)a0;
- (id)getSectionTitle:(unsigned long long)a0;
- (id)initWithScene:(unsigned int)a0 delegate:(id)a1;
- (void)dealloc;
- (void)onFriendAssistUnreadCountChanged;
- (void)onFriendAssistAddMsg:(id)a0;
- (void)onFriendAssistRelpyMsg:(id)a0;
- (void)onFriendAssistClearMsg:(id)a0;
- (void)onFriendAssistStatusChange:(id)a0;
- (void)onSetStrangerRemark:(id)a0;
- (void)onModifyContact:(id)a0;
- (void).cxx_destruct;

@end

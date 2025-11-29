@class BFTask, AWEIMMessageConversation, NSString;

@interface AWEIMMessageConversationUserActionSendBulletMessageComponent : AWEIMComponentBase <AWEIMUserActionSendBulletMessageComponentInterface, AWEIMMessageListDataAction>

@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) BFTask *firstRenderTask;
@property (nonatomic) BOOL isHitRoleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)willFilterMessage:(id)a0;
- (BOOL)shouldSendUserActionWithModel:(id)a0;
- (BOOL)isEnterConFirstTimeWithModel:(id)a0;
- (void)sendUserActionBulletMessageIfNeed:(id)a0 finalModel:(id)a1;
- (BOOL)shouldFilterThisMessage:(id)a0;
- (BOOL)preCheckShouleHandleSendBulletMessageWithModel:(id)a0;
- (BOOL)checkHasSendBulletMessage:(id)a0;
- (BOOL)checkHasSameBulletMessage:(id)a0;
- (void).cxx_destruct;

@end

@class AWEIMConversationContext, NSMutableArray, NSString;

@interface AWEIMSafeGuardVerifyCodeManager : NSObject <IESIMSecurityMessage>

@property (nonatomic) BOOL imVerifyCodeWindowShowing;
@property (retain, nonatomic) NSMutableArray *resendQueue;
@property (weak, nonatomic) AWEIMConversationContext *conversationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)securityCheckDidEnd:(long long)a0;
- (void)checkAndSendMessageWithBlock:(id /* block */)a0;
- (void)willResendMessage:(id)a0;
- (void)resendMessage:(id)a0 conversationID:(id)a1;
- (void)handleSafeGuardVerifyCodeResult:(long long)a0;
- (void)enqueueMessage:(id)a0 conversationID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

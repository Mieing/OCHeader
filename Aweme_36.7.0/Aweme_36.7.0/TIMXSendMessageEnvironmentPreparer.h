@class TIMXSDKInstance;

@interface TIMXSendMessageEnvironmentPreparer : NSObject

@property (weak, nonatomic) TIMXSDKInstance *r;

- (id)checkArgumentWithMessageTemplate:(id)a0;
- (id)prepareEenvironmentsWithTemplate:(id)a0 error:(id *)a1;
- (id)precheckWithMessageTemplate:(id)a0;
- (id)prepareConversationWithConversationID:(id)a0 msgID:(id)a1 error:(id *)a2;
- (id)checkUploaderWithMessageTemplate:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end

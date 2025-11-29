@class AWEECOMIMChatDetailViewController;

@interface AWEECOMIMChatDetailService : NSObject

@property (weak, nonatomic) AWEECOMIMChatDetailViewController *currentVC;

+ (id)shareInstance;

- (id)msgModelWithMessageId:(id)a0 conversationId:(id)a1;
- (void).cxx_destruct;

@end

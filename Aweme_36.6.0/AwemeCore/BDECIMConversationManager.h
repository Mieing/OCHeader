@class BDECIMClient;

@interface BDECIMConversationManager : NSObject

@property (weak, nonatomic) BDECIMClient *client;

- (void)onReceiveMessageSentResponse:(id)a0;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end

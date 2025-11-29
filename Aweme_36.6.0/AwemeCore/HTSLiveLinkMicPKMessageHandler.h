@protocol HTSLinkMicPKControlProtocol;

@interface HTSLiveLinkMicPKMessageHandler : HTSLiveMessageHandler

@property (weak, nonatomic) id<HTSLinkMicPKControlProtocol> delegate;

- (void)handlePKSettingMessage:(id)a0;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end

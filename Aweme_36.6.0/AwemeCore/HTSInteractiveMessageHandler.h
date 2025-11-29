@protocol HTSInteractiveControlProtocol;

@interface HTSInteractiveMessageHandler : HTSLiveMessageHandler

@property (weak, nonatomic) id<HTSInteractiveControlProtocol> delegate;

- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end

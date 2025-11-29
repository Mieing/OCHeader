@protocol CJPayTimerQueueBridgeProtocol;

@interface CJPayTimerQueueBridge : NSObject

@property (weak, nonatomic) id<CJPayTimerQueueBridgeProtocol> delegate;

- (void)bridgeMethod;
- (void).cxx_destruct;

@end

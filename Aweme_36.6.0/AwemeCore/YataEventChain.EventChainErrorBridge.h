@class NSString, EventChainEventContextBridge;

@interface YataEventChain.EventChainErrorBridge : NSObject {
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ ctx;
}

@property (nonatomic, readonly) long long code;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) EventChainEventContextBridge *context;

- (void).cxx_destruct;
- (id)init;

@end

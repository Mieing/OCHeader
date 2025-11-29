@class NSString, NSDictionary;

@interface EventChainNotificationBridge : NSObject {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ job;
    void /* unknown type, empty encoding */ status;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSDictionary *contextParams;
@property (nonatomic, readonly) NSString *chainName;
@property (nonatomic, readonly) NSString *chainID;

- (void).cxx_destruct;
- (id)init;
- (id)response;

@end

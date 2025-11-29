@class NSString, TTBridgeRegister, IESBridgeEngine;

@interface PIANSRExecuteConfiguration : NSObject

@property (nonatomic) BOOL reuse;
@property (nonatomic) BOOL forceUpdate;
@property (nonatomic) long long expires;
@property (copy, nonatomic) NSString *customUserAgent;
@property (weak, nonatomic) TTBridgeRegister *bridgeRegister;
@property (weak, nonatomic) IESBridgeEngine *iesBridgeEngine;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end

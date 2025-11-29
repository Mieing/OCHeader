@class NSString;

@interface FlowCard.FlowXBridgeOpenMethod : BDXBridgeOpenMethod

@property (nonatomic, readonly) NSString *methodName;
@property (nonatomic, readonly) long long authType;

- (id)initWithCallHandler:(id /* block */)a0;
- (id)initWithContext:(id)a0;
- (id)init;

@end

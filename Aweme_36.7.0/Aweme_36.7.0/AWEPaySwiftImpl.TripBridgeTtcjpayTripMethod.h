@class NSString;

@interface AWEPaySwiftImpl.TripBridgeTtcjpayTripMethod : BDXBridgeMethod

@property (nonatomic, readonly) NSString *methodName;
@property (nonatomic, readonly) long long authType;
@property (nonatomic, readonly) Class paramModelClass;
@property (nonatomic, readonly) Class resultModelClass;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCallHandler:(id /* block */)a0;
- (id)initWithContext:(id)a0;
- (id)init;

@end

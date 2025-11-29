@class NSString;

@interface AWEECommerceSwiftImpl.AWEECXBridgeCreateTakeOutLiveActivityMethod : BDXBridgeMethod {
    void /* unknown type, empty encoding */ manager;
}

@property (nonatomic, readonly) NSString *methodName;
@property (nonatomic, readonly) long long authType;
@property (nonatomic, readonly) Class paramModelClass;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCallHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;

@end

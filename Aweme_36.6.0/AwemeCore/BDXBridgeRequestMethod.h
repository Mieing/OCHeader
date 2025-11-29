@class NSString;
@protocol BDXBridgeNetworkServiceProtocol;

@interface BDXBridgeRequestMethod : BDXBridgeMethod <BDXBridgeMethodCallProtocol>

@property (retain, nonatomic) id<BDXBridgeNetworkServiceProtocol> networkService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowBackgroundThreadCall;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isSupportedMethod:(id)a0;
- (long long)authType;
- (id)methodName;

@end

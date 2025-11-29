@class NSString;

@interface BDXBridgeReportAppLogMethod : BDXBridgeMethod <BDXBridgeMethodCallProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowBackgroundThreadCall;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)methodName;

@end

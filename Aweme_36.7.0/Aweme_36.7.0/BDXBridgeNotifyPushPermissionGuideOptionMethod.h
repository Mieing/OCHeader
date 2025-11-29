@class NSString;

@interface BDXBridgeNotifyPushPermissionGuideOptionMethod : BDXBridgeMethod

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *permissionScene;

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)handlePushPermissionChangedWithOpen:(BOOL)a0;
- (long long)authType;
- (id)methodName;

@end

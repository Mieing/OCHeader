@interface AWELiteRequestCalendarAuthorityXBridge : BDXBridgeMethod

+ (id)createCertWithPageContext:(id)a0 apiContext:(id)a1;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (unsigned long long)engineTypes;
- (long long)authType;
- (id)methodName;

@end

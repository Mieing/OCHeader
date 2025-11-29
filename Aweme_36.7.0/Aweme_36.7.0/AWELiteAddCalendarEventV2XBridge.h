@interface AWELiteAddCalendarEventV2XBridge : BDXBridgeMethod

+ (id)createCertWithPageContext:(id)a0 apiContext:(id)a1;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)engineTypes;
- (long long)authType;
- (id)methodName;

@end

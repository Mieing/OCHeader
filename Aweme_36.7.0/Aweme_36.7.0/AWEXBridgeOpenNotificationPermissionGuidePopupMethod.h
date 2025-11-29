@interface AWEXBridgeOpenNotificationPermissionGuidePopupMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentHalfScreenVC:(id)a0 withView:(id)a1;
- (void)p_adaptiveLowVersionSystemWithVC:(id)a0 withView:(id)a1;
- (BOOL)awe_canShowAlert;
- (void)awe_showPushAlert;
- (long long)awe_maxShowCount;
- (long long)authType;
- (id)methodName;

@end

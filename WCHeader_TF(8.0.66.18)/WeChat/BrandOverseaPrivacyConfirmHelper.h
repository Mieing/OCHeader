@interface BrandOverseaPrivacyConfirmHelper : MMObject

+ (BOOL)isNeedOverseaPrivacyConfirm;
+ (BOOL)shouldShowCloseOverseaPrivacyConfirm;
+ (void)requestOpenOverseaPrivacyAuthorizationWithOpenBlock:(id /* block */)a0;
+ (void)requestCloseOverseaPrivacyAuthorizationWithCloseBlock:(id /* block */)a0;
+ (void)setOverseaPrivacyConfirmLogic:(id)a0;
+ (id)getOverseaPrivacyConfirmLogic;

@end

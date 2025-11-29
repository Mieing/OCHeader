@class WOAPPrivacyConfirmLogic, NSString, WAOverseaPrivacyConfirmLogic;

@interface WAPrivacyConfirmProxy : NSObject <IWAPrivacyConfirmService>

@property (retain, nonatomic) WOAPPrivacyConfirmLogic *privacyConfirmLogic;
@property (retain, nonatomic) WAOverseaPrivacyConfirmLogic *overseaPrivacyLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNeedPrivacyConfirm;
+ (BOOL)isNeedOverseaPrivacyConfirm;

- (void)requestPrivacyConfirmrequirement:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;
- (void)requestOverseaPrivacyWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end

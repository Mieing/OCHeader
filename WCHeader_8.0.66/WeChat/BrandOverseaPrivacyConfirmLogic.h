@class NSString;

@interface BrandOverseaPrivacyConfirmLogic : MMObject <ServiceAuthExt>

@property (copy, nonatomic) id /* block */ openBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNeedOverseaPrivacyConfirm;
+ (BOOL)shouldShowCloseOverseaPrivacyConfirm;

- (void)requestOpenOverseaPrivacyAuthorizationWithOpenBlock:(id /* block */)a0;
- (void)requestCloseOverseaPrivacyAuthorizationWithCloseBlock:(id /* block */)a0;
- (void)onOpenService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void)onCloseService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void)onCancelServiceAuth;
- (void).cxx_destruct;

@end

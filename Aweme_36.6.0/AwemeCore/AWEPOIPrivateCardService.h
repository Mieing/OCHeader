@class NSDictionary, DUXToast, NSString;

@interface AWEPOIPrivateCardService : NSObject <AWEPOIPrivateCardServiceProtocol, DUXAlertDialogDelegate>

@property (nonatomic) BOOL isDialogShow;
@property (nonatomic) BOOL hasFollowed;
@property (retain, nonatomic) NSDictionary *paramDict;
@property (retain, nonatomic) DUXToast *toast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needHandleError:(id)a0 error:(id)a1;
+ (void)trackEvent:(id)a0 withModel:(id)a1 enterMethod:(id)a2 extraParams:(id)a3;
+ (BOOL)needHandleLiveAppointError:(id)a0 error:(id)a1;
+ (BOOL)needHandleCouponError:(id)a0 error:(id)a1;

- (void)alertDialogDidDismiss:(id)a0;
- (id)webviewSchemaString:(id)a0 joinParameters:(id)a1;
- (id)webviewUrlString:(id)a0 joinParameters:(id)a1;
- (BOOL)isCraftsmanScene;
- (void)followMerchantAndGetCoupon:(id)a0 toUser:(id)a1 extraInfo:(id)a2 materialId:(id)a3 onDialog:(id)a4;
- (void)updateFollowStatus:(long long)a0 toUser:(long long)a1 secUid:(id)a2;
- (void)showCouponDialog:(id)a0 andFollowMerchant:(id)a1 extraInfo:(id)a2 materialId:(id)a3 paramDict:(id)a4 onViewController:(id)a5;
- (void)showLiveAppointDialog:(id)a0 extraInfo:(id)a1 materialId:(id)a2 paramDict:(id)a3 onViewController:(id)a4;
- (void)openSchemaWithExtraInfo:(id)a0 toUserID:(id)a1 materialId:(id)a2 paramDict:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end

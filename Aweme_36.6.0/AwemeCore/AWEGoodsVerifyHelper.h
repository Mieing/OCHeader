@class NSString;

@interface AWEGoodsVerifyHelper : NSObject <HTSService, IESECDisclaimerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loginNCheckDisclaimerForPromotionSource:(long long)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
+ (void)acknowledgeDisclaimerForPromotionSource:(long long)a0;
+ (void)verifyGoodsManageAuthorityFromProfileIfNeeded:(id /* block */)a0;
+ (void)verifyGoodsManageAuthorityIfNeeded:(id /* block */)a0;
+ (void)loginIfNeededWithCompletion:(id /* block */)a0;
+ (void)verifyGoodsPageAuthorityIfNeeded:(id /* block */)a0 failureBlock:(id /* block */)a1 simple:(BOOL)a2;
+ (void)verifyGoodsAuthorityFromProfileIfNeeded:(id /* block */)a0 checkTopVC:(BOOL)a1;
+ (void)verifyGoodsAuthorityIfNeeded:(id /* block */)a0 failureBlock:(id /* block */)a1 simple:(BOOL)a2 checkTopVC:(BOOL)a3;
+ (void)checkDisclaimerForGoodsIfNeeded:(id)a0 action:(id /* block */)a1 cancel:(id /* block */)a2;
+ (void)checkDisclaimerForPromotionSource:(long long)a0 action:(id /* block */)a1 cancel:(id /* block */)a2;
+ (void)p_checkDisclaimerWithConfig:(id)a0 action:(id /* block */)a1 cancel:(id /* block */)a2;
+ (long long)disclaimerTypeWithConfig:(id)a0 descDict:(id *)a1;
+ (void)updateAlertCompletedWithDisclaimerKey:(id)a0;
+ (void)checkDisclaimerWithConfig:(id)a0 action:(id /* block */)a1 cancel:(id /* block */)a2;
+ (id)disclaimerDictionaryWithPromotionSource:(long long)a0 forceShow:(long long)a1;
+ (BOOL)legacyLawOnceOfPromotionSources:(id)a0;
+ (BOOL)hasAcceptedDisclaimerLocally:(id)a0;
+ (id)keyFromArray:(id)a0;
+ (void)verifyGoodsPageAuthorityIfNeeded:(id /* block */)a0;
+ (void)verifyGoodsPageAuthorityIfNeeded:(id /* block */)a0 simple:(BOOL)a1;
+ (void)loginNCheckDisclaimerWithGoods:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
+ (void)loginNCheckDisclaimerForBuyingPromotionID:(id)a0 promotionSource:(long long)a1 extraData:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
+ (BOOL)hasAcknowledgeDisclaimerForPromotionSource:(long long)a0;
+ (void)checkDisclaimerWithPromotionSource:(long long)a0 action:(id /* block */)a1 cancel:(id /* block */)a2;
+ (void)confirmDisclaimerLocally:(id)a0;
+ (void)recordTodayJumpNoticeForKey:(id)a0;
+ (void)popVerifyViewWithResponse:(id)a0 completion:(id /* block */)a1;
+ (id)dayFormatter;

- (void)onServiceInit;

@end

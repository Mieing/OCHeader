@interface IESECGoodsVerifyHelper : NSObject

+ (void)verifyGoodsManageAuthorityIfNeeded:(id /* block */)a0;
+ (void)loginIfNeededWithCompletion:(id /* block */)a0;
+ (void)loginNCheckDisclaimerWithConfig:(id)a0 confirmBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
+ (void)popVerifyViewWithResponse:(id)a0 completion:(id /* block */)a1;
+ (void)updateLocallyResult:(long long)a0 config:(id)a1;
+ (void)checkDisclaimerForTouTiaoProductWithConfig:(id)a0 action:(id /* block */)a1 cancel:(id /* block */)a2;
+ (void)checkDisclaimerForNonTouTiaoProductWithConfig:(id)a0 action:(id /* block */)a1 cancel:(id /* block */)a2;
+ (void)loginIfNeededWithExtraInfo:(id)a0 completion:(id /* block */)a1;
+ (void)updateRemoteResultWithConfig:(id)a0 completion:(id /* block */)a1;
+ (void)fetchDisclaimerResult:(id)a0 completion:(id /* block */)a1;
+ (id)locallyStorageKeyWithAppID:(id)a0;
+ (void)loginNCheckDisclaimerWithConfig:(id)a0 confirmBlock:(id /* block */)a1 cancleBlock:(id /* block */)a2;

@end

@interface AWELVDiversionAwemeRouteHandler : NSObject

+ (void)transitionWithTransitionInfo:(id)a0;
+ (void)fetchMediaAssetsWithMediaPaths:(id)a0 blockToast:(id)a1 logExtra:(id)a2 completion:(id /* block */)a3;
+ (void)ensureLoginWithTitle:(id)a0 logExtra:(id)a1 completion:(id /* block */)a2;
+ (void)ensureDoubleCheckWithParams:(id)a0 logExtra:(id)a1 completion:(id /* block */)a2;
+ (void)fetchMediaAssetsWithMediaPaths:(id)a0 blockToast:(id)a1 authorization:(unsigned long long)a2 logExtra:(id)a3 needTrackClick:(BOOL)a4 completion:(id /* block */)a5;
+ (void)realFetchMediaAssetsWithMediaPaths:(id)a0 completion:(id /* block */)a1;
+ (void)buildPopup:(id)a0 logExtra:(id)a1 clickCompletion:(id /* block */)a2 closeCompletion:(id /* block */)a3;

@end

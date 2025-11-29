@interface IESECBizUtils : NSObject

+ (id)updateEcomSceneID:(id)a0 withType:(long long)a1;
+ (id)viewControllerForURLString:(id)a0;
+ (BOOL)canOpenURLString:(id)a0;
+ (void)openURLString:(id)a0;
+ (void)openURLString:(id)a0 withBTMIdentifier:(id)a1 withBCMParams:(id)a2 host:(id)a3;
+ (BOOL)isToutiao:(long long)a0;
+ (BOOL)isStatusOnSale:(long long)a0;
+ (BOOL)isTaobao:(long long)a0;
+ (id)toutiaoPromotionSources;
+ (double)acquireAccurateActivityTime:(double)a0 serverTime:(double)a1;
+ (void)openURLString:(id)a0 isTopLevel:(BOOL)a1;
+ (id)getImageWithFullScreenshot;
+ (BOOL)isLiveMiniWindowAttached;
+ (BOOL)isLiveMiniWindowIsMuted;
+ (id)createBasicAnimationWithType:(long long)a0 from:(double)a1 to:(double)a2 duration:(double)a3;
+ (id)createBezierAnimationWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 controlPoint:(struct CGPoint { double x0; double x1; })a2 duration:(double)a3;
+ (void)addToCartAnimationWithContainerView:(id)a0 animationDelegate:(id)a1 animationRedPoint:(id)a2 startPoint:(struct CGPoint { double x0; double x1; })a3 endPoint:(struct CGPoint { double x0; double x1; })a4 animationSpeed:(double)a5 redPointRadius:(double)a6 scaleSize:(double)a7 endOpacity:(double)a8 animationKey:(id)a9;
+ (id)getCurrentTimeStamp;
+ (id)mergeBTMToken:(id)a0 openURL:(id)a1;
+ (void)addToCartAnimationWithContainerView:(id)a0 animationDelegate:(id)a1 animationLayer:(id)a2 startPoint:(struct CGPoint { double x0; double x1; })a3 endPoint:(struct CGPoint { double x0; double x1; })a4 animationKey:(id)a5;
+ (void)addToCartAnimationV2WithContainerView:(id)a0 imageURL:(id)a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 completion:(id /* block */)a4;
+ (void)openURLString:(id)a0 needSaaSParam:(BOOL)a1;
+ (BOOL)gpsOn;
+ (void)openURLString:(id)a0 withBTMIdentifier:(id)a1 withBCMParams:(id)a2 host:(id)a3 fromViewController:(id)a4;
+ (void)openURLString:(id)a0 fromViewController:(id)a1;
+ (void)openURLString:(id)a0 animationType:(id)a1;
+ (struct CGPoint { double x0; double x1; })p_caculateControlPointWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
+ (id)gzipWithParams:(id)a0 error:(id)a1;
+ (BOOL)fromLiveWithSourcePage:(id)a0 metaParamsDict:(id)a1;
+ (BOOL)fromFeedWithMetaParamsDict:(id)a0;
+ (void)openURLString:(id)a0 needSaaSParam:(BOOL)a1 animationType:(id)a2;
+ (id)urlStringAfterHandleMegaObject:(id)a0;
+ (id)lastEcomSceneID:(id)a0;
+ (void)detailAddCartAnimationWithContainerView:(id)a0 animationDelegate:(id)a1 animationLayer:(id)a2 startPoint:(struct CGPoint { double x0; double x1; })a3 endPoint:(struct CGPoint { double x0; double x1; })a4 animationKey:(id)a5;
+ (void)internalAddCartAnimationWithContainerView:(id)a0 animationDelegate:(id)a1 animationLayer:(id)a2 startPoint:(struct CGPoint { double x0; double x1; })a3 endPoint:(struct CGPoint { double x0; double x1; })a4 redPointRadius:(double)a5 animationKey:(id)a6;
+ (id)resizeImageView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 originalImage:(id)a1;
+ (id)iesec_imageCropping:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)detailSupermarketPopAddCartAnimationWithContainerView:(id)a0 duration:(double)a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 animationKey:(id)a4;
+ (BOOL)isSmallScreenDevice;

@end

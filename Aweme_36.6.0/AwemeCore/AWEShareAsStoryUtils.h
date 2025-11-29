@interface AWEShareAsStoryUtils : NSObject

+ (BOOL)isInFeedRootVC;
+ (BOOL)isTopViewControllerInFollow;
+ (BOOL)isTopViewControllerInRecommend;
+ (BOOL)isTopViewControllerInFriends;
+ (BOOL)p_publishEnabled;
+ (BOOL)shouldEnableShareAsStoryWithAwemeModel:(id)a0;
+ (void)setupCanvasBackgroundWithPublishModel:(id)a0 useGradientBackground:(BOOL)a1 backgroundImage:(id)a2 backgroundImageData:(id)a3 playerSize:(struct CGSize { double x0; double x1; })a4;
+ (void)setupCanvasConfigWithPublishModel:(id)a0 useGradientBackground:(BOOL)a1 topColor:(id)a2 bottomColor:(id)a3 backgroundImage:(id)a4;
+ (BOOL)isEnabledWithAwemeModel:(id)a0 authorIsCurrentUser:(BOOL)a1;
+ (BOOL)isPrepareWithAwemeModel:(id)a0;
+ (void)addTodayInThePastStickerWithParamsModel:(id)a0 editorConfig:(id)a1 publishViewModel:(id)a2 locationX:(double)a3 locationY:(double)a4;
+ (BOOL)checkCanShareAwemeForVideoLength:(id)a0;
+ (BOOL)isSupportedCommentModel:(id)a0;
+ (double)addInfoStickerWithText:(id)a0 videoSize:(struct CGSize { double x0; double x1; })a1 videoScale:(double)a2 playerSize:(struct CGSize { double x0; double x1; })a3 editorConfig:(id)a4;

@end

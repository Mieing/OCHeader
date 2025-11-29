@class CSJAdSlot, UIViewController, CSJRewardedVideoWebViewController, CSJNativeExpressRewardDrawAdView, NSString, CSJDislikeContext, CSJMaterialMeta;
@protocol CSJNativeExpressVideoAdDelegate;

@interface CSJNativeExpressRewardDrawEndcardTransfer : NSObject <CSJRewardedVideoWebViewDelegate>

@property (retain, nonatomic) CSJAdSlot *slot;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (retain, nonatomic) CSJRewardedVideoWebViewController *endcardWebVC;
@property (retain, nonatomic) CSJDislikeContext *dislikeContext;
@property (nonatomic) BOOL isShowAlertView;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (weak, nonatomic) UIViewController *rootVC;
@property (retain, nonatomic) UIViewController *fromVC;
@property (weak, nonatomic) id<CSJNativeExpressVideoAdDelegate> rewardedVideoAd;
@property (weak, nonatomic) CSJNativeExpressRewardDrawAdView *drawAdView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createEndcardWebVC;
- (id)initWithSlot:(id)a0 materialMeta:(id)a1;
- (void)switchToEndcardWithRootVC:(id)a0 fromVC:(id)a1 isMute:(BOOL)a2;
- (id)getTrackTag;
- (void)rewardedVideoAdClose;
- (void)rewardedVideoH5AdDidClickNeedJump:(BOOL)a0;
- (void)rewardedVideoWebViewControllerClick:(id)a0 clickInfo:(id)a1;
- (void)rewardedVideoWebViewControllerDislikeClick:(id)a0;
- (void).cxx_destruct;

@end

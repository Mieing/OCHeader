@class NSString, CSJRewardedVideoWebViewControllerVM;
@protocol CSJRewardedVideoWebViewDelegate;

@interface CSJRewardedVideoWebViewController : CSJWebViewController <CSJRewardedVideoWebDefaultViewDelegate>

@property (nonatomic) struct CGSize { double width; double height; } originSize;
@property (weak, nonatomic) id<CSJRewardedVideoWebViewDelegate> delegate;
@property (nonatomic) BOOL isTransform;
@property (nonatomic) unsigned long long transformDirection;
@property (nonatomic) BOOL isRewardedVideo;
@property (copy, nonatomic) NSString *ritScene;
@property (nonatomic) BOOL mute;
@property (retain, nonatomic) CSJRewardedVideoWebViewControllerVM *videoWebVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)endcardVM;
- (id)playableVM;
- (id)initViewControllerWithAd:(id)a0 size:(struct CGSize { double x0; double x1; })a1 isNativeExpress:(BOOL)a2 pageType:(unsigned long long)a3;
- (id)initViewControllerWithAd:(id)a0 isNativeExpress:(BOOL)a1 pageType:(unsigned long long)a2;
- (void)webCloseButtonTapped;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end

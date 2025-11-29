@class NSString, UIImageView, NSDictionary, AWEHotSpotTTArticleWebViewController, UIPanGestureRecognizer;

@interface AWEHotSpotTTArticleInteractionViewController : AWEPlayInteractionViewController <UIGestureRecognizerDelegate, AWEHotSpotTTArticleInteractionViewControllerProtocol> {
    NSDictionary *_logExtraDict;
}

@property (nonatomic) BOOL currentModelFinishLoad;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (nonatomic) BOOL finishFirstLoad;
@property (retain, nonatomic) UIPanGestureRecognizer *exitPanGesture;
@property (retain, nonatomic) AWEHotSpotTTArticleWebViewController *articleContainerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLogExtraDict:(id)a0;
- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (id)logExtraDict;
- (void)setHide:(BOOL)a0;
- (void)setPureMode:(BOOL)a0 animateDuration:(double)a1;
- (void)weakInteractionView:(BOOL)a0;
- (BOOL)isFirstRender;
- (id)webviewURL;
- (void)_removeChildVC;
- (void)_addChildVC;
- (double)loadArticleInterval;
- (id)panelDelegate;
- (void)updateProgressSliderWithTime:(double)a0 totalDuration:(double)a1 model:(id)a2;
- (void)setupBottomContainer;
- (void)setupLeftContainer;
- (void)setupRightContainer;
- (void)updatePlayProgressWithTime:(double)a0 totalDuration:(double)a1 model:(id)a2;
- (void)setPlayProgressWithTime:(double)a0 totalDuration:(double)a1 model:(id)a2;
- (void)webViewDidLoadSuccess:(id)a0;
- (void)webViewDidLoadFail:(id)a0;
- (BOOL)loadElementContainerByProvider;
- (void)showDislikeOnVideo;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)dealloc;
- (void)loadWebViewIfNeeded;

@end

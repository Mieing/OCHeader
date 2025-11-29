@class UIView, NSString, AWEAwemeModel, UIImageView, UIButton, AWEGradientView, NSDictionary, UIViewController, AWEInvalidVideoSourceView;
@protocol AFDSlidesViewProtocol, AWEPlayVideoViewControllerProtocol, AWEDiscoverDHorizontalCellControllerDelegate;

@interface AWEDiscoverDHorizontalBaseCellController : UIViewController <AWEPlayVideoViewControllerStatusDelegate, AWEPlayVideoDelegate, AWEDiscoverDHorizontalCellController>

@property (nonatomic) BOOL active;
@property (retain, nonatomic) AWEInvalidVideoSourceView *invalidVideoResourceView;
@property (retain, nonatomic) UIView<AFDSlidesViewProtocol> *imageSliderView;
@property (retain, nonatomic) UIImageView *photosIconView;
@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *playVideoViewController;
@property (retain, nonatomic) AWEGradientView *gradientMaskView;
@property (retain, nonatomic) UIViewController *videoContainerViewController;
@property (nonatomic) double searchHorizontalAutoPlayCellWidth;
@property (retain, nonatomic) UIButton *videoActionButton;
@property (copy, nonatomic) id /* block */ playerWillStartNextLoop;
@property (nonatomic) double playerHeight;
@property (copy, nonatomic) id /* block */ trackAwemePlayTime;
@property (nonatomic) BOOL enableVideoActionButton;
@property (weak, nonatomic) id<AWEDiscoverDHorizontalCellControllerDelegate> horizontalAutoPlayDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (readonly, nonatomic) BOOL isResourceRecalled;
@property (retain, nonatomic) AWEAwemeModel *model;

+ (struct CGSize { double x0; double x1; })horizontalCellSizeWithModel:(id)a0;

- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (void)videoResourceDidRecallInPlayer:(id)a0;
- (BOOL)shouldReponseToVideoRecallInPlayer:(id)a0;
- (void)trackShow;
- (void)switchVideoStatusByClick:(id)a0;
- (void)showPlayingUI;
- (void)showPauseUI;
- (void)resetImageSliderView;
- (void)resetLivePlayer;
- (void)updateModel:(id)a0 playerHeight:(double)a1;
- (void)trackAdBreak;
- (void)showInvalidVideoResourceView;
- (void)trackSearchResultClick:(id)a0;
- (void)initSlidesViewIfNeeded;
- (void)hideInvalidVideoResourceView;
- (long long)getScaleModelWithAwemodel:(id)a0;
- (void)didEndShowing;
- (void)setupSubViews;
- (void)videoResourceDidRecallInVideoController:(id)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)transitionContext;
- (void)reset;
- (void)didResignActive;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)isActive;

@end

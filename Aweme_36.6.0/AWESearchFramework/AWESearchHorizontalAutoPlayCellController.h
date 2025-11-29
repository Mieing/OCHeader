@class AWEAwemeModel, NSString, AWEGradientView, NSDictionary, UIButton, AWEOriginalAdModel, UIViewController, AWEInvalidVideoSourceView, AWESearchTracker;
@protocol AWESearchHorizontalAutoPlayCellControllerDelegate, AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoTrackProtocol, AWEAwemePlayVideoProtocol;

@interface AWESearchHorizontalAutoPlayCellController : UIViewController <AWEPlayVideoViewControllerStatusDelegate, AWEPlayVideoDelegate, AWESearchHorizontalAutoPlayCellProtocol>

@property (nonatomic) BOOL active;
@property (retain, nonatomic) AWEInvalidVideoSourceView *invalidVideoResourceView;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *playVideoViewController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWESearchTracker *searchTracker;
@property (retain, nonatomic) AWEGradientView *gradientMaskView;
@property (retain, nonatomic) UIViewController *videoContainerViewController;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long index;
@property (nonatomic) double searchHorizontalAutoPlayCellWidth;
@property (readonly, nonatomic) BOOL isResourceRecalled;
@property (retain, nonatomic) UIButton *videoActionButton;
@property (copy, nonatomic) id /* block */ playerWillStartNextLoop;
@property (copy, nonatomic) id /* block */ trackAwemePlayTime;
@property (nonatomic) BOOL enableVideoActionButton;
@property (weak, nonatomic) id<AWESearchHorizontalAutoPlayCellControllerDelegate> horizontalAutoPlayDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double x0; double x1; } cellSize;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;

+ (struct CGSize { double x0; double x1; })horizontalCellSizeWithModel:(id)a0;

- (void)videoResourceDidRecallInPlayer:(id)a0;
- (BOOL)shouldReponseToVideoRecallInPlayer:(id)a0;
- (void)switchVideoStatusByClick:(id)a0;
- (void)showPlayingUI;
- (void)showPauseUI;
- (void)resetLivePlayer;
- (void)trackAdBreak;
- (void)showInvalidVideoResourceView;
- (void)trackSearchResultClick:(id)a0;
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
- (void)updateModel:(id)a0;

@end

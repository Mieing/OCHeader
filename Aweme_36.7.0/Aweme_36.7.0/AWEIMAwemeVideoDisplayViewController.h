@class UIView, NSString, UIImage, AWEIMPlayVideoAnimationPauseIcon, UITapGestureRecognizer, UIImageView, AWEUILoadingView, AWEGradientView;
@protocol IESVideoPlayerProtocol;

@interface AWEIMAwemeVideoDisplayViewController : UIViewController <IESVideoPlayerDelegate, BTMPageManagableProtocol>

@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *posterURL;
@property (copy, nonatomic) NSString *videoURL;
@property (copy, nonatomic) NSString *role;
@property (retain, nonatomic) UIImage *currentPosterImage;
@property (retain, nonatomic) AWEGradientView *headerGradientView;
@property (retain, nonatomic) UIView *returnView;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (retain, nonatomic) UIImageView *posterImageView;
@property (retain, nonatomic) AWEIMPlayVideoAnimationPauseIcon *playStatusIconImageView;
@property (retain, nonatomic) UIView *playerInteractionView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL hasPlayed;
@property (nonatomic) BOOL pausedByResignFirstResponder;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)setupGesture;
- (void)setBcmPageParams;
- (void)showInteractiveUI;
- (void)hideInteractiveUI;
- (void)onViewDidTapped;
- (BOOL)scaleModelNeedAspectFit:(struct CGSize { double x0; double x1; })a0;
- (void)configPoster;
- (void)configPlayerController;
- (void)pauseByResignFirstResponder;
- (void)continueByResignFirstResponder;
- (void)checkAutoPlay;
- (void)loadVideoFailed;
- (void)renderWithVideoID:(id)a0 posterURL:(id)a1 videoURL:(id)a2 role:(id)a3;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)applicationDidBecomeActive:(id)a0;
- (void)addObserver;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupView;
- (void)pauseIfNeeded;

@end

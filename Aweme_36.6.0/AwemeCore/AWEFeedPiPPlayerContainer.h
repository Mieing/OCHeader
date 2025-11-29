@class AWEBinding, UIView, AWEUILoadingView, UIViewController;
@protocol AWEPlayVideoViewControllerProtocol;

@interface AWEFeedPiPPlayerContainer : UIView

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) AWEBinding *videoControllerBinding;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIView *placeholderView;
@property (retain, nonatomic) UIView *playerInteractionView;
@property (weak, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *videoController;
@property (nonatomic) double progress;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)playLoadingAnimation;
- (void)setupVideoBind;
- (void)checkBlackScreen;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupView;
- (void)stopLoadingAnimation;

@end

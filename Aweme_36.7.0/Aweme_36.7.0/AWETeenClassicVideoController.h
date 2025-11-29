@class UIImageView, UIView, AWETeenModeTextLoadingView;

@interface AWETeenClassicVideoController : AWETeenBaseVideoController

@property (retain, nonatomic) AWETeenModeTextLoadingView *centerLoadingView;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) UIImageView *richContentImageView;
@property (retain, nonatomic) UIView *videoDeletedView;

- (void)updatePlayerIfNeeded;
- (void)beginTransitionAnimation;
- (void)setCopyFromOtherVideoController:(BOOL)a0;
- (void)stopLoadingAnimationAction;
- (void)playLoadingAnimationAction;
- (void)p_addVideoDeletedView;
- (BOOL)isVideoInvalid;
- (void)addRichContentImage:(id)a0;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)pause;
- (BOOL)pause:(BOOL)a0;
- (void)reset;
- (void)viewDidLoad;
- (BOOL)play:(BOOL)a0;
- (void)viewWillLayoutSubviews;

@end

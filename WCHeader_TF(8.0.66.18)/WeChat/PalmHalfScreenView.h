@class AVPlayerViewController, UIStackView, MMWebImageView, NSString, UILabel, UIView, UIButton;
@protocol PalmHalfScreenViewDelegate;

@interface PalmHalfScreenView : MMUIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *videoContainerView;
@property (retain, nonatomic) AVPlayerViewController *videoPlayerController;
@property (nonatomic) unsigned int timeoutMs;
@property (retain, nonatomic) UIStackView *contentStack;
@property (nonatomic) BOOL dismissed;
@property (nonatomic) BOOL shown;
@property (retain, nonatomic) MMWebImageView *placeholderImageView;
@property (retain, nonatomic) id timeObserver;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long popUpStartTime;
@property (nonatomic) unsigned long long videoLoadStartTime;
@property (nonatomic) unsigned long long videoLoadCostTime;
@property (weak, nonatomic) id<PalmHalfScreenViewDelegate> delegate;

- (id)initWithTitle:(id)a0 text:(id)a1 timeoutMs:(unsigned int)a2 videoUrl:(id)a3 firstFrameUrl:(id)a4 sessionId:(id)a5;
- (void)setupBackgroundView;
- (void)setupContainerView;
- (void)setupTitle:(id)a0;
- (void)setupVideoPlayerWithURL:(id)a0 firstFrameUrl:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)videoDidFinishPlaying:(id)a0;
- (void)dealloc;
- (void)setupContentStack;
- (void)appendContentWithText:(id)a0;
- (void)appendComplexDescription:(id)a0;
- (void)appendSimpleDescription:(id)a0;
- (void)showInView;
- (void)dismiss:(id)a0;
- (void)handleButtonTap;
- (void)handleBackgroundTap:(id)a0;
- (void).cxx_destruct;

@end

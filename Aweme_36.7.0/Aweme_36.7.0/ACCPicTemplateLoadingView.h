@class CAGradientLayer, NSString, NSTimer, UILabel, UIView;

@interface ACCPicTemplateLoadingView : UIView

@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) NSString *progressText;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UIView *progressBG;
@property (retain, nonatomic) CAGradientLayer *gradientLayerFG;
@property (retain, nonatomic) NSTimer *loadingTimer;
@property (nonatomic) BOOL isPausing;
@property (retain, nonatomic) NSString *projectUUID;
@property (nonatomic) unsigned long long status;
@property (nonatomic) struct CGSize { double width; double height; } initialSize;
@property (weak, nonatomic) UIView *mediaContainerView;

- (void)pauseLoading;
- (void)updateLoadingStatus:(unsigned long long)a0;
- (void)startLoadingWithDuration:(double)a0;
- (void)resumeLoading;
- (void)startLoadingIfNeededWithDuration:(double)a0;
- (void)showFailedToastWithText:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (BOOL)isActive;
- (void)setupUI;
- (void)updateProgress:(double)a0;

@end

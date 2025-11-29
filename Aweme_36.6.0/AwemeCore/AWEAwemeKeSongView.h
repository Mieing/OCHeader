@class CAGradientLayer, NSString, AWEAwemeModel, UIView, UIButton;
@protocol AWEAwemeKeSongViewDelegate;

@interface AWEAwemeKeSongView : UIView

@property (nonatomic) double containerViewWidth;
@property (nonatomic) double containerViewHeight;
@property (retain, nonatomic) UIButton *keSongButton;
@property (retain, nonatomic) UIView *keSongContainerView;
@property (retain, nonatomic) UIView *textContainerView;
@property (retain, nonatomic) UIView *loopContainerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double subviewWidth;
@property (nonatomic) long long subviewCount;
@property (copy, nonatomic) NSString *keSongLabelText;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWEAwemeKeSongViewDelegate> delegate;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (double)widthWithLabelString:(id)a0;
- (void)setupBind;
- (void)handleContainerViewClicked:(id)a0;
- (double)keSongContainerViewX;
- (void)updatekeSongButtonImage;
- (id)subviewWithLabelString:(id)a0;
- (void)handleKeSongButtonClicked:(id)a0;
- (void)configRollingAnimationWithLabelString:(id)a0 awemeModel:(id)a1 animation:(BOOL)a2 trackParams:(id)a3;
- (void)setFlatStretchLabelIfNeeded:(BOOL)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)labelFont;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end

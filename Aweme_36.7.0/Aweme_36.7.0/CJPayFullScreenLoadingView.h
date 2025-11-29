@class NSString, UIImageView, UILabel, UIView, CABasicAnimation;

@interface CJPayFullScreenLoadingView : UIView <CJPayScreenLoadingViewProtocol>

@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UILabel *suggestLabel;
@property (retain, nonatomic) UIView *logoBackgroundView;
@property (retain, nonatomic) UIImageView *sweepingLightImgView;
@property (retain, nonatomic) CABasicAnimation *sweepingLightAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dismissWithAnimated:(BOOL)a0;
+ (void)showLoadingOnView:(id)a0;
+ (id)sharedView;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)showLoadingOnView:(id)a0;
- (double)logoViewScale;
- (id)suggestAttributedString;
- (BOOL)isHotSoon;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)setupUI;
- (void)orientationDidChange:(id)a0;

@end

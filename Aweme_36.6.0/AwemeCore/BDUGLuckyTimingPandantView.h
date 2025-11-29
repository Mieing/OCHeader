@class NSString, LOTAnimationView, UIImageView, UILabel, UIView, BDUGLuckyCountDownPendantModel;
@protocol BDUGLuckyTimingPendantViewDelegate;

@interface BDUGLuckyTimingPandantView : UIControl <LOTAnimationDelegate, BDUGLuckyCountDownPendantViewInternalProtocol>

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UIImageView *coinImageView;
@property (copy, nonatomic) id /* block */ tapHandler;
@property (retain, nonatomic) BDUGLuckyCountDownPendantModel *timingModel;
@property (nonatomic) long long countTime;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) UIView *maskView;
@property (weak, nonatomic) id<BDUGLuckyTimingPendantViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithCountTime:(long long)a0;
- (void)updateFrameWithPosition:(id)a0 superviewWidth:(double)a1 superviewHeight:(double)a2;
- (void)registerTapHandler:(id /* block */)a0;
- (void)registerCloseIconTapHandler:(id /* block */)a0;
- (void)viewDidTapped:(id)a0;
- (id)timingBundle;
- (id)buildTimeStrWithLeftTime:(long long)a0;
- (void)updateCountTime:(long long)a0 animated:(BOOL)a1;
- (id)textForStatus:(unsigned long long)a0 leftTime:(long long)a1;
- (void)updateTextLabelAnimated:(id)a0;
- (void)updatePendantLayoutIfNeed;
- (void)playFinishedAnimation:(id /* block */)a0;
- (void)pendantDidAddToSuperView;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)show;
- (void)setupSubviews;
- (void)updateWithModel:(id)a0;
- (void)updateWithStatus:(unsigned long long)a0;

@end

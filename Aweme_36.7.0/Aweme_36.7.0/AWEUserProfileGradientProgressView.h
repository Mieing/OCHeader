@class NSString, LOTAnimationView, UIImageView, AWEGradientView, UIView, UILabel;

@interface AWEUserProfileGradientProgressView : UIView <AWEUserProfileProgressProtocol>

@property (nonatomic) BOOL smallStyle;
@property (nonatomic) long long intPercent;
@property (nonatomic) long long intPercentting;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *animationBackgroudView;
@property (retain, nonatomic) AWEGradientView *animationView;
@property (retain, nonatomic) LOTAnimationView *finishAnimationView;
@property (retain, nonatomic) UIView *iconTailoringView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 smallStyle:(BOOL)a1;
- (void)configWith:(float)a0 delay:(double)a1;
- (void)p_setupSubviews:(BOOL)a0;
- (void)p_configAnimationWith:(id)a0;
- (void)p_changeContentLabelAttributedTextWith:(long long)a0;
- (void)p_startProgressAnimationWith:(long long)a0;
- (void)p_changeProgressNumber:(id)a0;
- (void).cxx_destruct;

@end

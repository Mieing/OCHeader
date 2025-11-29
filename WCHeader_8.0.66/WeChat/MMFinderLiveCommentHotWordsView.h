@class UIView, MMLiveScrollNumView, NSString, CAShapeLayer, UIImageView, CAGradientLayer, RichTextView, UILabel;

@interface MMFinderLiveCommentHotWordsView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) RichTextView *wordLabel;
@property (retain, nonatomic) MMLiveScrollNumView *numView;
@property (retain, nonatomic) UILabel *multiplayLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIView *hotWordsSignBGView;
@property (retain, nonatomic) UIImageView *hotWordsSignImageView;
@property (retain, nonatomic) UILabel *hotWordsSignTitleLabel;
@property (nonatomic) unsigned long long style;
@property (nonatomic) long long currentCount;
@property (nonatomic) long long targetCount;
@property (nonatomic) long long step;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(unsigned long long)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)recreateGradientLayerIfNeeded;
- (void)recreateMaskLayerIfNeeded;
- (void)initViews;
- (id)numFont;
- (void)configWithWord:(id)a0 count:(long long)a1;
- (void)updateLabelWithCount:(long long)a0;
- (long long)eliminateForbiddenCount:(long long)a0;
- (void)animateToCount:(long long)a0 duration:(double)a1;
- (id)currentWord;
- (void)rescheduleAnimation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end

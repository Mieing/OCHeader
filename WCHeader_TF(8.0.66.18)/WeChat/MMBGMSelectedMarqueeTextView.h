@class UILabel, NSAttributedString, NSString;

@interface MMBGMSelectedMarqueeTextView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) NSAttributedString *attributedContent;
@property (nonatomic) double flowSpeed;
@property (nonatomic) double flowDuration;
@property (nonatomic) double gradientWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startPlaying;
- (void)stopPlaying;
- (BOOL)isTextLabelExceeded;
- (void)initView;
- (void)resizeView;
- (id)gradientMaskLayer;
- (void)layoutSubviews;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end

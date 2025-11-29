@class UIFont, MMUILabel, WAMinimizeFloatingAudioSoundView;

@interface WAMinimizeFloatingAuidoOnlyView : UIView

@property (retain, nonatomic) MMUILabel *indicatorLabel;
@property (retain, nonatomic) WAMinimizeFloatingAudioSoundView *leftView;
@property (retain, nonatomic) WAMinimizeFloatingAudioSoundView *rightView;
@property (retain, nonatomic) UIFont *labelFont;
@property (nonatomic) BOOL soundActive;
@property (nonatomic) double sideViewMarginCoefficient;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isStub:(BOOL)a1;
- (id)displayText;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)updateSoundActive:(BOOL)a0;
- (void).cxx_destruct;

@end

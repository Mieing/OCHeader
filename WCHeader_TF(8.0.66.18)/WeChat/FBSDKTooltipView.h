@class UIColor, NSString, NSArray, UILabel, UITapGestureRecognizer;

@interface FBSDKTooltipView : UIView {
    struct CGPoint { double x; double y; } _positionInView;
    double _displayTime;
    double _minimumDisplayDuration;
    UILabel *_textLabel;
    UITapGestureRecognizer *_insideTapGestureRecognizer;
    double _leftWidth;
    double _rightWidth;
    double _arrowMidpoint;
    BOOL _pointingUp;
    BOOL _isFadingOut;
    UIColor *_innerStrokeColor;
    double _arrowHeight;
    double _textPadding;
    double _maximumTextWidth;
    double _verticalTextOffset;
    double _verticalCrossOffset;
    unsigned long long _colorStyle;
    NSArray *_gradientColors;
    UIColor *_crossCloseGlyphColor;
}

@property (nonatomic) double displayDuration;
@property (nonatomic) unsigned long long colorStyle;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *tagline;

- (id)initWithTagline:(id)a0 message:(id)a1 colorStyle:(unsigned long long)a2;
- (void)dealloc;
- (void)presentFromView:(id)a0;
- (void)presentInView:(id)a0 withArrowPosition:(struct CGPoint { double x0; double x1; })a1 direction:(unsigned long long)a2;
- (void)dismiss;
- (void)animateFadeIn;
- (void)animateFadeOutWithCompletion:(id /* block */)a0;
- (void)onTapInTooltip:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutSubviewsAndDetermineFrame;
- (void)setMessage:(id)a0 tagline:(id)a1;
- (void)scheduleAutomaticFadeout;
- (void)scheduleFadeoutRespectingMinimumDisplayDuration;
- (void)cancelAllScheduledFadeOutMethods;
- (void).cxx_destruct;

@end

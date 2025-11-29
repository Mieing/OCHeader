@class CAGradientLayer, NSArray, UIImageView, UIImage;

@interface CECNotesAudioRecorderGradientAnimationView : CECNotesAudioRecorderBaseView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oriRect;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *cancelImageView;
@property (nonatomic) BOOL ignoreGradient;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maxAnimationRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } minAnimationRect;
@property (retain, nonatomic) UIImage *biggerImage;
@property (retain, nonatomic) UIImage *smallerImage;
@property (retain, nonatomic) NSArray *smallerColors;
@property (retain, nonatomic) NSArray *biggerColors;

- (void)startWorkWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (void)stopWorkWithPreState:(unsigned long long)a0 currentState:(unsigned long long)a1;
- (id)colorsForBigger:(BOOL)a0;
- (void)biggerAnimation;
- (void)smallerAnimation;
- (void).cxx_destruct;
- (double)scale;
- (void)updateWithViewModel:(id)a0;

@end

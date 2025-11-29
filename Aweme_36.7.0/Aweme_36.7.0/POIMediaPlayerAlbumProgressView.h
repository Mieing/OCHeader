@class UIColor, UIView;

@interface POIMediaPlayerAlbumProgressView : UIView

@property (nonatomic) double lastValue;
@property (nonatomic) BOOL needMini;
@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) double progressValue;
@property (nonatomic) double totalValue;
@property (nonatomic) BOOL needAnimation;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double interval;

- (double)widthWithProgress:(double)a0 totalValue:(double)a1;
- (double)miniWidth;
- (void)updateProgressValue:(double)a0 totalValue:(double)a1 needMini:(BOOL)a2 animated:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end

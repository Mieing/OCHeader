@class UIColor;

@interface ACCLightningRecordLivePhotoRingView : UIView

@property (nonatomic) long long dotCount;
@property (nonatomic) double dotRadius;
@property (retain, nonatomic) UIColor *dotColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)updateDotColor:(id)a0;
- (void)startPlayWithDuration:(double)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

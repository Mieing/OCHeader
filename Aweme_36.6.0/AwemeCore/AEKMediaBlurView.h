@class UIView;
@protocol AEKMediaGradientViewProtocol;

@interface AEKMediaBlurView : UIView <AEKMediaBlurViewProtocol>

@property (nonatomic) unsigned long long style;
@property (nonatomic, retain) UIView<AEKMediaGradientViewProtocol> *gradientView;
@property (nonatomic, retain) UIView *overlayView;
@property (nonatomic, retain) UIView *noiseView;
@property (nonatomic, retain) UIView *coverView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end

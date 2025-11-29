@class ACCGradientView, UIImageView, UIView;
@protocol AEKMediaBlurViewProtocol;

@interface AWEStudioRecordCinemaBackgroundView : UIView

@property (readonly, nonatomic) ACCGradientView *fullGradientView;
@property (readonly, nonatomic) UIImageView *blurImageView;
@property (readonly, nonatomic) UIView<AEKMediaBlurViewProtocol> *gradientColorView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetUI;

@end

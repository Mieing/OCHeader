@class UIImageView;

@interface CameraScanBlurEffectView : UIView

@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UIImageView *bottomImageView;

- (id)init;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

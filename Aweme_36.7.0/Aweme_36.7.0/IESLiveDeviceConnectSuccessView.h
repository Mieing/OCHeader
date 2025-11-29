@class UIImageView, UILabel;

@interface IESLiveDeviceConnectSuccessView : UIView

@property (retain, nonatomic) UIImageView *successImageView;
@property (retain, nonatomic) UILabel *textLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end

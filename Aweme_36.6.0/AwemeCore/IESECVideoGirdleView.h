@class IESECVideoGirdleViewModel, UIImageView, IESECVideoGirdleRightView;

@interface IESECVideoGirdleView : UIView

@property (retain, nonatomic) IESECVideoGirdleViewModel *viewModel;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *leftLogoImageView;
@property (retain, nonatomic) IESECVideoGirdleRightView *rightView;

- (void)updateRightViewWithViewModel:(id)a0;
- (void)updateCurrentRightViewWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithViewModel:(id)a0;

@end

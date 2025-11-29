@class UIImageView, IESLLGradientView, UILabel;
@protocol IESLLGDImageDetailViewDelegate;

@interface IESLLGDImageDetailView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) IESLLGradientView *descBackgroundView;
@property (retain, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) id<IESLLGDImageDetailViewDelegate> delegate;

- (void)configWithImageDetailModel:(id)a0 completion:(id /* block */)a1;
- (void)didTapImageDetailView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

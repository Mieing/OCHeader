@class UIImageView, AWEGradientView, UILabel;
@protocol AWEGDImageDetailViewDelegate;

@interface AWEGDImageDetailView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEGradientView *descBackgroundView;
@property (retain, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) id<AWEGDImageDetailViewDelegate> delegate;

- (void)configWithImageDetailModel:(id)a0 completion:(id /* block */)a1;
- (void)didTapImageDetailView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

@class UIImageView, UILabel;
@protocol AWEIronManCradViewDelegate;

@interface AWEIronManCradView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (weak, nonatomic) id<AWEIronManCradViewDelegate> delegate;

- (void)configWithCardModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)tapAction:(id)a0;

@end

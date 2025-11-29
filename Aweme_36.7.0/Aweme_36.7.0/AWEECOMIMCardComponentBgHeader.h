@class UIImageView, UILabel;

@interface AWEECOMIMCardComponentBgHeader : UIView

@property (retain, nonatomic) UIImageView *bgImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;

+ (double)designHeight;

- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_customInit;

@end

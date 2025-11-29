@class UIImageView, UILabel, UIView, UIButton;

@interface IESLiveSoloKTVMVListViewHeader : UICollectionReusableView

@property (retain, nonatomic) UIImageView *coverIV;
@property (retain, nonatomic) UIView *mask;
@property (retain, nonatomic) UIImageView *editIV;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *btn;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) id /* block */ didClickUploadImageBlock;

- (void)initView;
- (void)updateSelected:(id)a0;
- (void)btnClick:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

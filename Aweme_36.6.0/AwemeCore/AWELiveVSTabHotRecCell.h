@class UILabel, AWEGradientView, UIImageView;

@interface AWELiveVSTabHotRecCell : UICollectionViewCell

@property (retain, nonatomic) AWEGradientView *tagViewGradientView;
@property (retain, nonatomic) AWEGradientView *coverBottomGradientView;
@property (retain, nonatomic) UILabel *tagView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *periodLabel;

- (void)configCardTag:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end

@class UILabel, UIView;

@interface AWEMusicDetailInspirationRelatedSectionCollectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;

- (void)configWithHeaderTitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

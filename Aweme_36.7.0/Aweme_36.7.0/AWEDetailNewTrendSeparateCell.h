@class UILabel, UIView;

@interface AWEDetailNewTrendSeparateCell : UICollectionViewCell

@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *rightLineView;

- (void)handleTitleValueChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

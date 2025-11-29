@class UILabel, UIView;

@interface AWEVideoCoverImageHistoryHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isEmpty;

- (void)p_setupConstraint;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

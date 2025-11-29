@class UILabel, NSString, UIColor;

@interface AWEFeedSearchRecommendVideoCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;

- (void)updateTitleLayoutWithInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 multiLines:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

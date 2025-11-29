@class AWEIMNoticeFoldStructModel, UIImageView, UILabel, UIView;

@interface AWEOfficialFoldItemCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) AWEIMNoticeFoldStructModel *model;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end

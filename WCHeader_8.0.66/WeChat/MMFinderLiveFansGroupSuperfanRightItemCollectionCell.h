@class UILabel, MMWebImageView;

@interface MMFinderLiveFansGroupSuperfanRightItemCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MMWebImageView *webImageView;

+ (id)identifier;

- (void)configWithItem:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

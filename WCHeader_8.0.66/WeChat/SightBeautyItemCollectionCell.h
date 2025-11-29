@class NSString, UILabel, UIView;

@interface SightBeautyItemCollectionCell : UICollectionViewCell

@property (copy, nonatomic) NSString *beautyTitle;
@property (retain, nonatomic) UIView *textContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isSelected;
@property (weak, nonatomic) UIView *textContainerBlurView;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })getCellSize;

- (void)layoutSubviews;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end

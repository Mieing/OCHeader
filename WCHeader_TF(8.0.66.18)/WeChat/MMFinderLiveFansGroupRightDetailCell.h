@class UIView, MMUILabel, MMWebImageView;

@interface MMFinderLiveFansGroupRightDetailCell : MMFinderLiveFansGroupDetailBaseTableViewCell

@property (retain, nonatomic) MMUILabel *levelLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMWebImageView *noticeImageView;
@property (retain, nonatomic) UIView *lineView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initUI;
- (double)getProportionLevelCenterX;
- (double)getProportionLineViewLeft;
- (double)getProportionLineViewPadding;
- (void)layoutSubviews;
- (void)configWithLevel:(unsigned int)a0 desc:(id)a1 imageUrlString:(id)a2;
- (void).cxx_destruct;

@end

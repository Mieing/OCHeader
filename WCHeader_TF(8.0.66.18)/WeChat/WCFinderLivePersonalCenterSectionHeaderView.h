@class UILabel;

@interface WCFinderLivePersonalCenterSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;

+ (id)reuseID;
+ (id)headerFont;
+ (double)headerViewHeight;

- (void)layoutSubviews;
- (void).cxx_destruct;

@end

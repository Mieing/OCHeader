@class MMUILabel, UIView;

@interface MMFinderLiveOnlineStateRewardCountView : UICollectionReusableView

@property (retain, nonatomic) MMUILabel *label;
@property (retain, nonatomic) UIView *headerView;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateRewardAmount:(long long)a0;
- (void)updateHeaderView:(id)a0;
- (void).cxx_destruct;

@end

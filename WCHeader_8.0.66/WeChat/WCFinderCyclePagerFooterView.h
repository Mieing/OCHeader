@class UILabel, UIImageView, WCFinderAnimationLoadingView;

@interface WCFinderCyclePagerFooterView : UICollectionReusableView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;

- (void)updateType:(unsigned long long)a0;
- (void).cxx_destruct;

@end

@class WCFinderHeadImageView, WCFinderAuthInfoIconView, UILabel, WCFinderAccoutItem;

@interface WCFinderProfileRecommendFollowCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderAccoutItem *item;
@property (retain, nonatomic) WCFinderHeadImageView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *authViewLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) UILabel *descLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_doLayout;
- (void)layoutSubviews;
- (id)displayAuthInfoText:(id)a0;
- (void).cxx_destruct;

@end

@class UIImageView, UILabel, UIView;
@protocol WCFinderNearbyTableViewCellDelegate;

@interface WCFinderNearbyTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *mBackgroundView;
@property (retain, nonatomic) UIImageView *poiImageView;
@property (retain, nonatomic) UILabel *poiTipsLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<WCFinderNearbyTableViewCellDelegate> delegate;

+ (double)getNearbyTableViewCellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)shouldHiddenSubViews:(BOOL)a0;
- (void)onClickNearbyCellAction;
- (void).cxx_destruct;

@end

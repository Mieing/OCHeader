@class UIButton;

@interface AWELongPressAdsActionCell : UITableViewCell

@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) UIButton *likeButton;

- (void)dislikeButtonDidSelected;
- (void)likeButtonDidSelected;
- (void)adsActionViewDismiss;
- (void)dislikeButtonClick;
- (void)likeButtonClick;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;

@end

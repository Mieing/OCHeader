@class WCFinderLinearView, UILabel, MMWebImageView, AchievementInfo_GameAchievement;

@interface WCFinderGameAchievementPanelPageView : UICollectionViewCell

@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) MMWebImageView *hdIconView;
@property (retain, nonatomic) UILabel *itemNameLabel;
@property (retain, nonatomic) WCFinderLinearView *achievementView;
@property (retain, nonatomic) UILabel *achievementNameLabel;
@property (retain, nonatomic) AchievementInfo_GameAchievement *gameAchievement;

+ (double)displayHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

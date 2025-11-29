@class UILabel, AchievementInfo_GameAchievement, MMWebImageView;

@interface WCFinderGameTitleAuthItemView : UIView

@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) AchievementInfo_GameAchievement *gameAchievement;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDisplayCovered:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end

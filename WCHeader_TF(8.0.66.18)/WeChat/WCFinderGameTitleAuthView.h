@class NSMutableArray, AchievementInfo;

@interface WCFinderGameTitleAuthView : UIView

@property (retain, nonatomic) NSMutableArray *authIconViews;
@property (retain, nonatomic) AchievementInfo *achievementInfo;
@property (nonatomic) BOOL displayCovered;

+ (BOOL)shouldDispalyWithAchievementInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupWithAchievementInfo:(id)a0;
- (void)reLayoutElements;
- (void)onClickGameAchievement:(id)a0;
- (void).cxx_destruct;

@end

@class UIImageView, UILabel, UIView;

@interface AWEUserHomeVisitorButton : UIButton

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *completeImageView;
@property (retain, nonatomic) UIView *iconBackGroundView;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *defaultDetailLabel;
@property (retain, nonatomic) UIView *accessView;
@property (nonatomic) double animationDuration;
@property (nonatomic) unsigned long long currentType;
@property (nonatomic) long long currentCount;
@property (nonatomic) BOOL shouldFitMiniScreen;
@property (nonatomic) BOOL shouldHideCNText;
@property (nonatomic) long long currentGreetCount;
@property (nonatomic) BOOL isGreetToastShow;

+ (Class)aAWEUserProfileGreetCommonAdapterClass;

- (void)updateToNoVisitorSetting;
- (void)updateVisitorCount:(long long)a0;
- (id)aAWEUserProfileGreetCommonAdapter;
- (void)_commontInitWithType:(unsigned long long)a0;
- (void)p_updateIconAndDetailConstraint;
- (void)layoutReminderDefaultIcon;
- (void)layoutReminderDefaultHTSGreet;
- (id)visitorIconImage;
- (void)p_updateToNoVisitorSetting;
- (void)p_updateVisitorCountAnimated;
- (void)p_showNewGreetGuideBubbleIfNeeded;
- (void)fitMiniScreen;
- (void)fitNormalScreen;
- (void)fitMiniScreenForHTS;
- (void)fitMiniScreenForDouYin;
- (void)fitNormalScreenForHTS;
- (void)fitNormalScreenForDouYin;
- (id)accessibilityLabel;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)textContent;

@end

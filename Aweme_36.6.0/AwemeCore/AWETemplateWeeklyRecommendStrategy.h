@class AWEDailyWeeklyRecommendGuideTagView;

@interface AWETemplateWeeklyRecommendStrategy : AWETemplateTagsCommonStrategy

@property (retain, nonatomic) AWEDailyWeeklyRecommendGuideTagView *contentView;

+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (void)viewController_willDisplay;
- (id)getWeeklyTerm;
- (void)didInitializeView;
- (void)tagDidShow;
- (void)setTagShowFlagBasedOnBusinessID;
- (void)trackDouyinSelectBrandShow;
- (void)showRecommendGuideTagAnimation;
- (void)configContentView;
- (BOOL)enableAppendLableNameForVideoTracker;
- (void).cxx_destruct;
- (id)customView;
- (void)didInitialize;

@end

@class AWEUITheme;

@interface AWESearchResultHybridforceDarkModule : AWESearchResultHybridBaseContainerModules

@property (nonatomic) BOOL shouldFollowKeyboardMode;
@property (retain, nonatomic) AWEUITheme *lastVideoTheme;

+ (id)moduleName;

- (void)searchHybrid_willLeaveSearchModeWithLeaveType:(id)a0;
- (void)dispatchRouterModel:(id)a0;
- (void)configForceSearchKeyBoardTheme;
- (void).cxx_destruct;

@end

@class AWEHomepageTabBarContext, NSString, NSArray, AWEHomepageTopBarContext;

@interface AWEFeedHomePageContext : NSObject

@property (copy, nonatomic) NSString *selectedTopTabId;
@property (nonatomic) long long selectedTopIndex;
@property (copy, nonatomic) NSArray *currentTopTabIdList;
@property (copy, nonatomic) NSString *selectedTopTabReferString;
@property (copy, nonatomic) NSString *currentTabReferString;
@property (nonatomic) BOOL isXTabSelected;
@property (nonatomic) BOOL isTopTabSelected;
@property (nonatomic) BOOL isTabBarSelected;
@property (nonatomic) unsigned long long topBarThemeStyle;
@property (retain, nonatomic) AWEHomepageTopBarContext *topBarContext;
@property (retain, nonatomic) AWEHomepageTabBarContext *tabBarContext;

- (void).cxx_destruct;

@end

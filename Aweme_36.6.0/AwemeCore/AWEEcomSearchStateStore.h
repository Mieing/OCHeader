@class AWEEcomSearchMoreActionConfig, NSString, NSDictionary, NSHashTable;

@interface AWEEcomSearchStateStore : NSObject

@property (retain, nonatomic) NSHashTable *subscribers;
@property (nonatomic) long long renderViewController;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) BOOL isFullPage;
@property (copy, nonatomic) NSDictionary *middleGuessWordExtraLog;
@property (nonatomic) BOOL useMiddleExtraLog;
@property (copy, nonatomic) NSString *selectedSugWordID;
@property (retain, nonatomic) NSString *presearchID;
@property (copy, nonatomic) NSDictionary *advantagePointLogExtra;
@property (copy, nonatomic) NSString *wordlogID;
@property (copy, nonatomic) NSString *wordID;
@property (copy, nonatomic) NSString *virtualWordsContent;
@property (copy, nonatomic) NSString *virtualGroupId;
@property (nonatomic) unsigned long long placeHolderRefreshType;
@property (copy, nonatomic) NSString *initialTab;
@property (nonatomic) BOOL tabBarHidden;
@property (nonatomic) BOOL needHideTabBar;
@property (nonatomic) unsigned long long selectedIndex;
@property (copy, nonatomic) NSString *currentEnterMethod;
@property (nonatomic) BOOL disableEcomDynamicTabs;
@property (copy, nonatomic) NSString *ecomTargetTab;
@property (nonatomic) BOOL lockEcomTargetTab;
@property (nonatomic) double wordTapingEndedTimestamp;
@property (nonatomic) BOOL fetchToastHasShown;
@property (nonatomic) BOOL hasPullDownScrollView;
@property (nonatomic) BOOL alreadySearchedOnce;
@property (nonatomic) BOOL enableAmbientColorChange;
@property (nonatomic) unsigned long long resultPageState;
@property (copy, nonatomic) NSDictionary *bannerShowInfo;
@property (retain, nonatomic) AWEEcomSearchMoreActionConfig *moreActionConfig;

- (id)fillWith:(id)a0;
- (void)publishTo:(id)a0 category:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString, NSDictionary, AWEProfileContext, AWEUserModel;

@interface AWEFavoriteTabListDataContext : NSObject

@property (copy, nonatomic) NSDictionary *routeParams;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) BOOL isInLandingPage;
@property (nonatomic) BOOL isInUserHomePage;
@property (nonatomic) BOOL hasViewAppearedInOthersPage;
@property (nonatomic) BOOL hasRedDotWhenSwitched;
@property (nonatomic) BOOL needHeaderCellAttachTop;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) unsigned long long favoriteLandingType;
@property (copy, nonatomic) NSString *favoriteAwemeLastViewedItemID;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *logExtraDic;
@property (copy, nonatomic) NSString *uniqueID;
@property (nonatomic) unsigned long long currentTabType;
@property (weak, nonatomic) AWEProfileContext *profileContext;
@property (nonatomic) BOOL shouldAutoLanding;
@property (nonatomic) BOOL hasRedDotPopoverShowed;
@property (copy, nonatomic) NSDictionary *noNeedParsedParamsToServer;
@property (copy, nonatomic) id /* block */ requestDataCompletionBlock;
@property (copy, nonatomic) id /* block */ favoriteAwemeCellWillDisplayBlock;
@property (copy, nonatomic) id /* block */ trackShowDurationBlock;

- (void)configWithRouterParamsDictionary:(id)a0;
- (void).cxx_destruct;

@end

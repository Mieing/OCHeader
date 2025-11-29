@class NSString, NSDictionary, NSMutableSet, NSDate;

@interface AWEFamiliarTabBarButtonTrackManager : NSObject <AWEUserMessage, AWEFamiliarTabBarButtonTrackManagerProtocol>

@property (retain, nonatomic) NSString *enterFamiliarMethod;
@property (retain, nonatomic) NSString *enterFamiliarNoticeType;
@property (nonatomic) BOOL shouldTrackItemAmount;
@property (nonatomic) long long yellowDotTrackerNum;
@property (copy, nonatomic) NSString *yellowDotTrackerGids;
@property (copy, nonatomic) NSString *yellowDotFamiliarCountContext;
@property (nonatomic) unsigned long long yellowDotTrackerPullType;
@property (nonatomic) long long videoViewCount;
@property (copy, nonatomic) NSDictionary *enterHomepageFamiliarParams;
@property (retain, nonatomic) NSMutableSet *recentPlayedItemIDs;
@property (nonatomic) BOOL isEnterFamiliarByPush;
@property (retain, nonatomic) NSString *enterMethodFromRecommendPush;
@property (nonatomic) BOOL shouldRefreshAddYellowDotTrackInfo;
@property (copy, nonatomic) NSString *lastEnterFrom;
@property (copy, nonatomic) NSString *lastEnterMethod;
@property (copy, nonatomic) NSString *lastPlayedItemID;
@property (nonatomic) unsigned long long lastPlayedItemSourceType;
@property (nonatomic) long long isFamiliarYellowDotViewShowing;
@property (nonatomic) BOOL isEnterFamiliarByMateBubble;
@property (nonatomic) BOOL isEnterFamiliarWhenMateBubbleShowing;
@property (nonatomic) long long enterTimes;
@property (retain, nonatomic) NSString *shownNoticeTypes;
@property (retain, nonatomic) NSDate *lastEnterDate;
@property (retain, nonatomic) NSDate *lastExitDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (id)toPageForTabItemType:(long long)a0;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)clearRecentPlayedItemIDs;
- (id)enterHomepageFamiliarMethod;
- (long long)recentPlayedItemCount;
- (void)recordFamiliarYellowDotTrackInfo;
- (void)addYellowDotCommonReqParamTo:(id)a0 useTrackRecord:(BOOL)a1;
- (void)clearFamiliarYellowDotTrackInfo;
- (void)changeTrackItemAmountStatus;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)recordEnterFamiliarMethod:(id)a0;
- (void)resetTrackItemAmountStatus;
- (void)trackForEnterHomepageFamiliarWithParams:(id)a0;
- (void)clearVideoViewCount;
- (void)trackForEnterHomepageFamiliarWithParams:(id)a0 needRecord:(BOOL)a1 needReport:(BOOL)a2;
- (void)recordEnterFamiliarNoticeType:(id)a0;
- (id)getEnterHomepageFamiliarParamsWithPreviousPage:(id)a0;
- (id)getFamiliarTrackParamsWithTrackInfo:(id)a0;
- (void)addEnterTimes;
- (void)resetRecentPlayedAction;
- (void)readFromStorage;
- (id)getNoticeType;
- (id)enterHomepageFamiliarNoticeType;
- (void)addVideoViewCount;
- (void)recordRecentPlayedItemWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

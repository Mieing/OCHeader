@class NSString, NSMutableDictionary, NSDictionary;

@interface AWEShowTrackerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *showUniversalParams;
@property (retain, nonatomic) NSMutableDictionary *recommendDistributeVideoInfoParams;
@property (retain, nonatomic) NSMutableDictionary *searchBeforeUniversalParams;
@property (retain, nonatomic) NSMutableDictionary *showUniversalLongVideoParams;
@property (retain, nonatomic) NSMutableDictionary *searchBeforeUniversalLongVideoParams;
@property (retain, nonatomic) NSMutableDictionary *showUniversalPlayletADParameters;
@property (copy, nonatomic) NSString *adModelLogExtraStr;
@property (nonatomic) long long innerWatchAdCount;
@property (nonatomic) BOOL isInnerRecommend;
@property (copy, nonatomic) NSString *enterTimeStamp;
@property (nonatomic) long long enterEpisodeRank;
@property (copy, nonatomic) NSDictionary *playletIAAUnlockReqIDCache;

+ (id)sharedInstance;

- (void)setShowUniversalParamsInPlayletWithFromGroupId:(id)a0;
- (id)getShowUniversalParams;
- (void)setPlayletInRecommendDistributeVideoInfo:(id)a0;
- (void)removeRecommendDistributeVideoInfo;
- (id)getRecommendDistributeVideoInfo;
- (void)setPlayletRecommendPlayletFromGroupID:(id)a0;
- (void)setPlayletRecommendFromGroupID:(id)a0;
- (id)getPlayletADUniversalParameters;
- (id)getPlayletADModelLogExtraStr;
- (void)setShowUniversalParamsWithFromGroupId:(id)a0 referString:(id)a1;
- (void)willLeaveSearchViewController;
- (void)setShowUniversalParamsWithLongVideoFromGroupId:(id)a0 LongVideoFromAlbumID:(id)a1 referString:(id)a2;
- (void)setPlayletADUniversalParameters:(id)a0 referString:(id)a1 isCompensate:(BOOL)a2;
- (void)setPlayletADModelLogExtraStr:(id)a0 referString:(id)a1 isCompensate:(BOOL)a2;
- (id)getShowUniversalLongVideoParams;
- (id)showTrackerRootList;
- (id)showTrackerRootListForPlayletUniversalADParameters;
- (id)showTrackerLongVideoRootList;
- (void).cxx_destruct;

@end

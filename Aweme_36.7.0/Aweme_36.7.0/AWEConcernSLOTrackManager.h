@class NSString, NSMutableDictionary;

@interface AWEConcernSLOTrackManager : NSObject <AWEConcernSLOTrackManagerProtocol>

@property (copy, nonatomic) NSString *firstAwemeID;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL hasTrack;
@property (retain, nonatomic) NSMutableDictionary *commonParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)addNotification;
- (void)trackRefreshBeforeFirstFrameIfNeed;
- (void)resetManager;
- (void)trackInitFetchAndRefresh:(id)a0 type:(long long)a1 error:(id)a2;
- (void)trackLoadMore:(id)a0 error:(id)a1;
- (void)onFeedEndScroll:(id)a0;
- (void)onVideoStartPlay:(id)a0;
- (void)onLivePlaySuccess:(id)a0;
- (void)onLivePlayFailed:(id)a0;
- (void)trackSLOSuccessWithCommonParam:(id)a0 extraParam:(id)a1;
- (void)trackSLOFailedWithErrorType:(unsigned long long)a0 commonParam:(id)a1 extraParam:(id)a2;
- (BOOL)isInFollowFeed:(id)a0;
- (id)commonTrackParamWithResponse:(id)a0 pullType:(long long)a1;
- (void)trackRefreshFailedWithError:(id)a0 response:(id)a1;
- (BOOL)responseOnlyContainsRecommendCard:(id)a0;
- (void)trackOnlyContainerRecommendCard;
- (id)getMsgFromError:(id)a0 model:(id)a1;
- (unsigned long long)getErrorType:(long long)a0;
- (void)trackWithResult:(unsigned long long)a0 errorType:(unsigned long long)a1 commonParam:(id)a2 extraParam:(id)a3;
- (void)trackTeaWithParam:(id)a0;
- (void)trackSlardarWithCategory:(id)a0 extraParam:(id)a1;
- (void)changeKey:(id)a0 toKey:(id)a1 inDictionary:(id)a2;
- (void)trackInitFetchFailedWithError:(id)a0;
- (void)trackFirstFrameSuccessWithAweme:(id)a0;
- (void)trackFirstFrameFailedWithAweme:(id)a0;
- (void)trackLeaveBeforeFirstFrameIfNeed;
- (void)trackEmptyPage;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

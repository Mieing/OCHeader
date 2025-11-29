@class NSTimer, NSMutableDictionary, NSMutableSet;
@protocol AWEHttpTask;

@interface AWERadarNetworkManager : NSObject

@property (nonatomic) BOOL isHeartBreak;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isHeartBreakRequestOnAir;
@property (nonatomic) BOOL isFollowRequestOnAir;
@property (nonatomic) double headBreakFrequency;
@property (nonatomic) BOOL isErrorToastShown;
@property (nonatomic) BOOL isFirstHeartBeat;
@property (retain, nonatomic) NSMutableDictionary *requestInfoParams;
@property (retain, nonatomic) NSMutableDictionary *requestErrorInfoParams;
@property (nonatomic) BOOL isDataEmpty;
@property (nonatomic) BOOL isBackDataEmpty;
@property (retain, nonatomic) NSMutableSet *fakeFollowingSet;
@property (nonatomic) BOOL needNeighbourhoodGroup;
@property (retain, nonatomic) id<AWEHttpTask> currentHbgetTask;
@property (retain, nonatomic) NSMutableDictionary *noticeMap;
@property (nonatomic) BOOL isNeedBackup;
@property (nonatomic) unsigned long long strategyType;
@property (nonatomic) BOOL shareAwemeEnabled;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)p_clearRequestCount;
- (void)p_addRequestCount:(id)a0;
- (void)errorLogs:(id)a0 andUrl:(id)a1 andRequestID:(id)a2;
- (void)p_trackRequestErrorInfo:(id)a0;
- (void)p_clientError:(id)a0 urlType:(id)a1;
- (void)p_addRequestErrorCount:(id)a0;
- (void)removeItemFromFakeFollowingSet:(id)a0;
- (void)requestFollowWithUserID:(id)a0 extra:(id)a1 prepare:(id /* block */)a2 finish:(id /* block */)a3;
- (void)addItemToFakeFollowingSet:(id)a0;
- (BOOL)isFakeFollowing:(id)a0;
- (void)updateNoticeMap:(id)a0;
- (void)p_trackRequestInfo;
- (void)heartBreak;
- (void)requestHeartBreakWithCompletion:(id /* block */)a0;
- (void)onHeartBreakRequestCompleteWithModel:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)monitorHbGet:(id)a0 error:(id)a1;
- (void)p_logAFDRadarHeartBeatResponse:(id)a0;
- (void)p_filterDuplicatedUserWithModel:(id)a0;
- (void)p_checkIsErrorInfo:(id)a0 response:(id)a1 error:(id)a2;
- (id)p_filterWithexistedUsers:(id)a0 list:(id)a1;
- (void)requestFollowWithUserID:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (BOOL)switchShakeIsOpen;
- (void)startHeartBreakWithCompletion:(id /* block */)a0;
- (void)stopHeartBreak;
- (void)requestExitRadarWithCompletion:(id /* block */)a0;
- (void)requestExitRadarIfNeeded;
- (BOOL)switchHistroyIsOpen;
- (void)setSwitchShake:(BOOL)a0 completion:(id /* block */)a1;
- (void)setSwitchHistroy:(BOOL)a0 completion:(id /* block */)a1;
- (void)initEmptyDataFlag;
- (void)trackEmptyDataFlag;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNetworkError:(id)a0;

@end

@class NSString, NSDictionary, NSDate, NSMutableArray;
@protocol AWEEGCDTimerProtocol;

@interface AWEAwemeBatchRequestManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) id<AWEEGCDTimerProtocol> timerTask;
@property (retain, nonatomic) NSMutableArray *cachedInfos;
@property (retain, nonatomic) NSMutableArray *cachedBlockInfos;
@property (copy, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) NSDate *firstCachedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)willStartLogin;
- (void)willLogoutWithUserID:(id)a0;
- (void)willStartSwitchAccountWithUser:(id)a0;
- (void)willSwitchAccountWithUserID:(id)a0;
- (void)reportCachedInfo;
- (void)createNetTaskTimerIfNeed;
- (id)arrayToJsonString:(id)a0;
- (void)reportCachedInfoIfNeeded;
- (void)appWillEnterBackground:(id)a0;
- (long long)countThreshold;
- (void)reportCachedInfo:(id)a0 header:(id)a1 timeInterval:(double)a2 completion:(id)a3;
- (id)itemIDs:(id)a0;
- (void)cacheAwemeWithHeader:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)timing;
- (double)timeInterval;
- (id)init;
- (void)appWillTerminate:(id)a0;
- (void)addNotificationObserver;

@end

@class NSTimer, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, HMDConfigFetchDelegate, HMDConfigFetchDataSource;

@interface HMDConfigFetcher : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL needFetchRequest;
@property (nonatomic) long long isFetchingRequestCount;
@property (retain, nonatomic) NSMutableDictionary *retryMap;
@property (nonatomic) BOOL successFetchConfig;
@property (weak, nonatomic) NSTimer *updateTimer;
@property (retain, nonatomic) NSMutableDictionary *updateIntervalMap;
@property (nonatomic) double currentTimerInterval;
@property (weak, nonatomic) id<HMDConfigFetchDelegate> delegate;
@property (weak, nonatomic) id<HMDConfigFetchDataSource> dataSource;

- (void)asyncFetchRemoteConfig:(BOOL)a0;
- (void)_fetchRemoteConfig:(BOOL)a0;
- (void)setNeedFetchRequest;
- (unsigned long long)_retryIndexForAppID:(id)a0;
- (unsigned long long)_resetRetryIndexForAppID:(id)a0;
- (void)_retryFetchRemoteConfig:(BOOL)a0 forAppID:(id)a1;
- (unsigned long long)_increaseRetryIndexForAppID:(id)a0;
- (void)_setUpdateInterval:(double)a0 forAppID:(id)a1;
- (double)_minimumUpdateInterval:(double)a0;
- (void)_setupUpdateTimer:(double)a0;
- (void)autoUpdateConfig:(id)a0;
- (void)setAutoUpdateInterval:(double)a0 forAppID:(id)a1;
- (void)networkChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

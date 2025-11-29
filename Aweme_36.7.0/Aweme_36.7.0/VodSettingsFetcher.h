@class NSTimer, VodSettingsConfigEnv;
@protocol VodSettingsFetcherListener, VodSettingsNetProtocol;

@interface VodSettingsFetcher : NSObject

@property (nonatomic) long long fetchRetryTimes;
@property (nonatomic) long long retryDelay;
@property (nonatomic) double lastFetchTime;
@property (nonatomic) long long fetchCount;
@property (retain, nonatomic) NSTimer *scheduleTimer;
@property (nonatomic) BOOL debug;
@property (nonatomic) long long maxRetryTimes;
@property (nonatomic) long long fetchInterval;
@property (retain, nonatomic) id<VodSettingsNetProtocol> netImp;
@property (nonatomic) long long version;
@property (weak, nonatomic) id<VodSettingsFetcherListener> delegate;
@property (readonly, nonatomic) VodSettingsConfigEnv *env;

- (void)_startFetch:(id)a0 configKey:(id)a1;
- (void)fetchIfNeed:(id)a0 configKey:(id)a1;
- (id)_convertStringValue:(id)a0;
- (void)_delayFetch:(id)a0 second:(long long)a1;
- (void)_resetTimer:(long long)a0 module:(id)a1;
- (void)_scheduleTimerEvent:(id)a0;
- (void)fetch:(id)a0 configKey:(id)a1 force:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

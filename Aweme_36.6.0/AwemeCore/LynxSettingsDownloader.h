@class NSObject;
@protocol OS_dispatch_source;

@interface LynxSettingsDownloader : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *scheduleTimer;

+ (id)getSettingsQueue;
+ (double)timeIntervalForNextFetch:(long long)a0;
+ (void)reportFetchEventWithUrl:(id)a0 source:(long long)a1 data:(id)a2 error:(id)a3;
+ (id)sharedInstance;

- (void)scheduleSettingsFetch;
- (void)initLynxSettingsFetchingLoop;
- (BOOL)shouldFetchImmediately;
- (void)syncSettings:(long long)a0 source:(long long)a1;
- (void)schedule:(long long)a0 timeInterval:(double)a1;
- (void)updateResponseData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)schedule:(long long)a0;

@end

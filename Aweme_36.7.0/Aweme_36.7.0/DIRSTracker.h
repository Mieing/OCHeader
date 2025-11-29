@class DIRSContext;

@interface DIRSTracker : NSObject {
    DIRSContext *context;
}

@property (nonatomic) BOOL eventTrackEnabled;
@property (nonatomic) BOOL eventUploadEnabled;
@property (nonatomic) unsigned long long launchType;

+ (id)mainTracker;
+ (id)initMainTrackerWithConfig:(id)a0;
+ (long long)version;
+ (id)shortVersion;

- (void)trackEvent:(id)a0 withProperties:(id)a1;
- (void)trackEvent:(id)a0 withProperties:(id)a1;
- (void)trackJSON:(id)a0 withType:(id)a1;
- (void)trackJSON:(id)a0 withType:(id)a1;
- (void)addHTTPHeaderBlock:(id /* block */)a0 forUser:(id)a1;
- (void)removeHTTPHeaderBlock:(id)a0;
- (void)removeABVersionsBlock:(id)a0;
- (void)setAppRegion:(id)a0;
- (BOOL)requestExpectedEventBatchInterval:(double)a0 withOptions:(id)a1;
- (BOOL)isEventHitSampling:(id)a0 withProperties:(id)a1;
- (void)setUserIdentifiers:(id)a0;
- (void)addGlobalProperties:(id)a0;
- (void)removeGlobalPropertiesForKeys:(id)a0;
- (void)addEventCommonParameters:(id)a0;
- (void)removeEventCommonParametersForKeys:(id)a0;
- (void)addABVersionsBlock:(id /* block */)a0 forUser:(id)a1;
- (void)setEventRegion:(id)a0;
- (id)currentEventRegion;
- (BOOL)handleURL:(id)a0;
- (id)config;
- (void).cxx_destruct;
- (id)description;
- (void)stop;
- (void)setDeviceIdentifiers:(id)a0;
- (BOOL)start;
- (id)clientId;
- (void)removeAllEvents;
- (id)initWithConfig:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)context;
- (void)setDeviceCategory:(id)a0;
- (void)setAppLanguage:(id)a0;

@end

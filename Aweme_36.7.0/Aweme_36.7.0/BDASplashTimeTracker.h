@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDASplashTimeTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *timestampCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic) long long splashShowingStatus;
@property (nonatomic) double splashTimestampRenderBegin;

+ (id)sharedInstance;

- (id)getLaunchTimestamps;
- (void)trackSplashRenderAndShowDuration;
- (void)setTimestampForKey:(id)a0;
- (void)trackSplashInitDuration;
- (void)trackSplashParseDuration;
- (void)trackSplashPickDurationWithModels:(id)a0;
- (void)trackUDPRequestDuration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)trackDuration;

@end

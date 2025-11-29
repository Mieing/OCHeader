@class AWEMVScatterTaskScheduler;

@interface AWEMVTrackUtils : NSObject

@property (retain, nonatomic) AWEMVScatterTaskScheduler *scatterTaskScheduler;

+ (void)trackEvent:(id)a0 withParams:(id)a1;
+ (void)suspendScatter:(BOOL)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end

@interface WCDeviceHKUtils : NSObject

+ (id)pathForHKSourceWhiteCache;
+ (id)getHKSourcePropertyPT;
+ (id)getHKSourcePropertyLD;
+ (BOOL)isOpenWatchDataUpload;
+ (id)getNeedAuthTypes;
+ (id)loadHKSourceWhiteCache;
+ (BOOL)saveHKSourceWhiteCache:(id)a0;
+ (void)requestAuthorizationWithTypes:(id)a0 completion:(id /* block */)a1;
+ (void)requestAllAuthIfNeed:(id /* block */)a0;
+ (BOOL)didShowAuthStepCount;
+ (BOOL)didShowAuthWorkout;
+ (BOOL)didShowAuthActivitySummary;
+ (id)getWorkoutActivityTypes;

@end

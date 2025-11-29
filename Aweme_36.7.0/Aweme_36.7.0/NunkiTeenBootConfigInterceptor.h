@class NSString;

@interface NunkiTeenBootConfigInterceptor : NSObject <HTSBootConfigInterceptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)teenBootConfigInterceptor;
+ (id)bootSortConfig;
+ (BOOL)enableBackgroundLaunch;
+ (BOOL)inDebugOrInhouseMode;
+ (id)getSubStageWithStage:(id)a0;
+ (unsigned long long)getTaskCountWithBootConfig:(id)a0;
+ (id)bgAppRefreshBootTaskSet;
+ (BOOL)enableBgFetch;
+ (BOOL)enableLocalNotiPrewarm;
+ (BOOL)enableBGSilentPush;

- (id)deepCopyBootConfig:(id)a0;
- (id)bootSortWithBootConfig:(id)a0 AndCopyConfig:(id)a1;
- (id)bgFetchWithCopyConfig:(id)a0;
- (id)debugTaskInsertWithCopyConfig:(id)a0;
- (id)getTaskMapWithOriginConfig:(id)a0;
- (id)interceptBootConfig:(id)a0;

@end

@interface AWEStudioDraftCleanManager : NSObject

@property (nonatomic) unsigned long long backgroundTempTask;
@property (nonatomic) long long lastRandomChoice;
@property (nonatomic) BOOL isCleaningInProgress;
@property (nonatomic) long long cachedCleanTaskType;
@property (nonatomic) BOOL hasSelectedTaskType;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedManager;

- (long long)currentCleanTaskType;
- (void)resetCleanedInCurrentSession;
- (void)cancelBackgroundCleanTask;
- (BOOL)hasCleanedInCurrentSession;
- (void)cleanDrafts;
- (void)markCleanedInCurrentSession;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)dealloc;
- (void)endBackgroundTask;
- (void)beginBackgroundTask;

@end

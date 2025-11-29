@class MMContext, NSRecursiveLock;

@interface MMBaseService : NSObject {
    BOOL m_isInitFinished;
    NSRecursiveLock *m_initLock;
    MMContext *m_context;
}

@property (nonatomic) BOOL isServiceRemoved;
@property (readonly, nonatomic) MMContext *context;

+ (BOOL)canUseInSafemode;

- (id)weakContextObject;
- (id)weakContextObjectWithContext:(id)a0;
- (id)strongContextObject;
- (id)strongContextObjectWithContext:(id)a0;
- (void)dealloc;
- (id)initWithContext:(id)a0;
- (id)unsafeUnwrap;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void)onServiceClearMemoryCache:(unsigned long long)a0 addedUserType:(unsigned long long)a1;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServicePauseBackgroundTask:(unsigned long long)a0;
- (void)onServiceResumeBackgroundTask:(unsigned long long)a0;
- (void)onServiceClearData;
- (void).cxx_destruct;

@end

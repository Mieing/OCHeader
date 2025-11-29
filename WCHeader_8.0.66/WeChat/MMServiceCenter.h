@class NSMutableDictionary, NSRecursiveLock;

@interface MMServiceCenter : NSObject {
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_dictService;
    id m_context;
    BOOL m_isCallClearData;
    BOOL m_shouldAssert;
    unsigned long long m_userState;
}

- (id)initWithContext:(id)a0;
- (void)dealloc;
- (BOOL)isServiceExist:(Class)a0;
- (id)getService:(Class)a0;
- (void)setService:(id)a0 for:(Class)a1;
- (void)removeService:(Class)a0;
- (void)callEnterForeground;
- (void)callEnterBackground;
- (void)callTerminate;
- (void)callMemoryWarning;
- (void)callClearMemoryCache:(unsigned long long)a0 addedUserType:(unsigned long long)a1;
- (void)callClearMemoryCacheInBackground;
- (void)callPauseBackgroundTask:(unsigned long long)a0;
- (void)callResumeBackgroundTask:(unsigned long long)a0;
- (void)removeAllServices;
- (void)callClearData;
- (void)callClearDataAfter;
- (void)commonInClearData:(id)a0;
- (void)userWillLogin;
- (void)userDidLogout;
- (void).cxx_destruct;

@end

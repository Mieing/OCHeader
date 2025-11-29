@class NSRecursiveLock, NSString, MMContext, NSMutableArray;

@interface MMContextManager : NSObject {
    NSMutableArray *m_contexts;
    NSRecursiveLock *m_lock;
    MMContext *m_activeContext;
}

@property (retain, nonatomic) NSString *documentPath;
@property (retain, nonatomic) NSString *libraryCachePath;
@property (readonly, nonatomic) unsigned int loginContextTimes;
@property (readonly, nonatomic) unsigned int loginNonGuestContextTimes;

+ (id)defaultManager;

- (id)init;
- (void)initContextEnvironment;
- (id)newGuestContext;
- (id)newContextWithUser:(id)a0 uin:(unsigned int)a1;
- (void)loginByContext:(id)a0;
- (void)logout:(id)a0;
- (id)allContexts;
- (id)activeUserContext;
- (id)contextByUin:(unsigned int)a0;
- (id)contextByMarsContext:(const void *)a0;
- (id)contextByMarsLongLinkName:(const char *)a0;
- (void)callEnterForeground;
- (void)callEnterBackground;
- (void)callTerminate;
- (void)callMemoryWarning;
- (void)callClearMemoryCache:(unsigned long long)a0 addedUserType:(unsigned long long)a1;
- (void)callClearMemoryCacheInBackground;
- (void)callPauseBackgroundTask:(unsigned long long)a0;
- (void)callResumeBackgroundTask:(unsigned long long)a0;
- (void).cxx_destruct;

@end

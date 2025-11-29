@class NSRecursiveLock, NSArray, NSString, NSHashTable;

@interface AWEScreenshotLogTrackerImpl : NSObject <AWEScreenshotLogTracker>

@property (retain, nonatomic) NSHashTable *providers;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSArray *blackList;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)screenshotTracker;

- (void)_reigsterScreenshotObserver;
- (void)_writeAppInfo;
- (void)_writeProvidersInfo;
- (void)_userTakeScreenshotForFeedback;
- (void)addTrackerProvider:(id)a0;
- (void)removeTrackerProvider:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

@class NSURLSession;
@protocol BUPersistenceProtocol;

@interface CSJURLTracker : NSObject

@property (retain, nonatomic) id<BUPersistenceProtocol> persistence;
@property (retain, nonatomic) NSURLSession *uploadSession;

+ (id)shareURLTracker;

- (void)trackURLs:(id)a0 model:(id)a1;
- (void)receiveWillEnterForegroundNotification:(id)a0;
- (void)trackURL:(id)a0;
- (void)trackURL:(id)a0 model:(id)a1;
- (void)cacheFailedURL:(id)a0 dict:(id)a1;
- (void)trackURL:(id)a0 model:(id)a1 isNormal:(BOOL)a2;
- (id)urlCachedKey:(id)a0 dataDict:(id)a1;
- (id)adIdCachedKey:(id)a0 dataDict:(id)a1;
- (long long)timesCachedKey:(id)a0 dataDict:(id)a1;
- (void)removeURLFromCacheWithKey:(id)a0;
- (void)addTimesCachedKey:(id)a0 dataDict:(id)a1;
- (void)trackURLs:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

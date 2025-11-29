@class NSObject, NSMutableArray, BDXThreadSafeDictionary;
@protocol OS_dispatch_semaphore;

@interface AWELynxEmbededCacheManager : NSObject

@property (retain, nonatomic) BDXThreadSafeDictionary *lynxViewGroupMap;
@property (retain, nonatomic) BDXThreadSafeDictionary *mainEmbededViewMap;
@property (retain, nonatomic) BDXThreadSafeDictionary *embededViewCachePool;
@property (retain, nonatomic) NSMutableArray *notificationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

+ (id)sharedInstance;

- (id)getEmbeddedViewWithKey:(id)a0;
- (void)setEmbeddedView:(id)a0 key:(id)a1;
- (id)getLynxViewGroupWithKey:(id)a0;
- (void)setLynxViewGroup:(id)a0 key:(id)a1;
- (void)removeCachePool;
- (id)mainEmbeddedView:(id)a0;
- (void)setMainEmbeddedView:(id)a0 key:(id)a1;
- (void)removeMainEmbeddedView:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

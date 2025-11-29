@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEMVChannelImagePrefetchManager : NSObject

@property (class, readonly) AWEMVChannelImagePrefetchManager *shared;

@property BOOL allowPrefetch;
@property (readonly, nonatomic) unsigned long long prefetchImageAvoidLoadVideoOptions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSMutableArray *cancelledPrefetchList;

+ (id)prefetchsWithCategoryArray:(id)a0;
+ (void)cancelPrefetchsWithCategoryArray:(id)a0 async:(BOOL)a1;
+ (void)cancelRequestsWithCategory:(id)a0 async:(BOOL)a1;

- (id)prefetchWithURLs:(id)a0 cacheName:(id)a1 category:(id)a2 options:(long long)a3;
- (id)initWithPrivate;
- (void)asyncCancelPrefetch;
- (void)asyncResumePrefetch;
- (void)_cancelPrefetch;
- (void)_resumePrefetch;
- (void)updateAllowPrefetch:(BOOL)a0;
- (id)prefetchWithURL:(id)a0 cacheName:(id)a1 category:(id)a2 options:(long long)a3;
- (id)prefetchWithURLs:(id)a0 category:(id)a1 options:(long long)a2;
- (void).cxx_destruct;

@end

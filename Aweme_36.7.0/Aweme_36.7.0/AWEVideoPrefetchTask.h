@class AWEVideoCachePrefetchTask, NSURL, NSString;
@protocol AWEVideoPrefetchTaskDelegate;

@interface AWEVideoPrefetchTask : NSObject <AWEVideoCacheRequestTaskDelegate>

@property (retain, nonatomic) AWEVideoCachePrefetchTask *requestTask;
@property (retain, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSString *videoURLKey;
@property (nonatomic) unsigned long long prefetchSize;
@property (nonatomic) BOOL enablePrefetchWIFIOnly;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<AWEVideoPrefetchTaskDelegate> delegate;
@property (nonatomic) double prefetchBeginTime;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskWithURLString:(id)a0 size:(unsigned long long)a1 queue:(id)a2;
+ (id)taskWithURLString:(id)a0 cacheString:(id)a1 size:(unsigned long long)a2 queue:(id)a3;

- (BOOL)startPrefetch;
- (void)requestTask:(id)a0 didReceiveData:(id)a1;
- (void)requestTask:(id)a0 didReceiveResponse:(id)a1;
- (void)requestTask:(id)a0 didReceiveWiredData:(id)a1;
- (void)requestTask:(id)a0 didFailWithError:(id)a1;
- (void)requestTaskDidFinishLoading:(id)a0;
- (id)taskWithURLString:(id)a0 size:(unsigned long long)a1 queue:(id)a2;
- (id)taskWithURLString:(id)a0 cacheString:(id)a1 size:(unsigned long long)a2 queue:(id)a3;
- (void)cancelPrefetch;
- (void).cxx_destruct;
- (id)init;

@end

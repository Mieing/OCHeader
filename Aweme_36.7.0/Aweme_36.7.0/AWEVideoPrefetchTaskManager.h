@class NSMutableDictionary, AWEVideoPrefetchTask, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AWEVideoPrefetchTaskManager : NSObject <AWEVideoPrefetchTaskDelegate>

@property (retain, nonatomic) NSMutableDictionary *runningTaskDict;
@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) AWEVideoPrefetchTask *runningTask;
@property (nonatomic) BOOL enablePrefetchWIFIOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setEnablePrefetchWIFIOnly:(BOOL)a0;
+ (void)cancelForGroup:(id)a0;
+ (void)prefetchWithURLString:(id)a0 size:(unsigned long long)a1;
+ (void)prefetchWithURLString:(id)a0 size:(unsigned long long)a1 group:(id)a2;
+ (BOOL)enablePrefetchWIFIOnly;
+ (void)prefetchWithURLString:(id)a0 size:(unsigned long long)a1 group:(id)a2 wifiOnly:(BOOL)a3 successBlock:(id /* block */)a4 failureBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
+ (void)cancelForURLString:(id)a0;
+ (void)prefetchWithURLString:(id)a0 cacheString:(id)a1 size:(unsigned long long)a2 group:(id)a3 wifiOnly:(BOOL)a4 successBlock:(id /* block */)a5 failureBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
+ (void)prefetchWithURLString:(id)a0 group:(id)a1;
+ (void)prefetchWithURLString:(id)a0;
+ (void)clear;
+ (id)sharedInstance;
+ (void)cancel;

- (void)requestTask:(id)a0 didFailWithError:(id)a1;
- (void)requestTaskDidFinishLoading:(id)a0;
- (void)requestTaskDidReceiveData:(id)a0;
- (void)requestTaskDidReceiveResponse:(id)a0;
- (void)_prefetchWithURLString:(id)a0 cacheString:(id)a1 size:(unsigned long long)a2 group:(id)a3 wifiOnly:(BOOL)a4 successBlock:(id /* block */)a5 failureBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
- (void)startPrefetchIfNeeded;
- (void)_cancelForGroup:(id)a0;
- (void)_cancelForURLString:(id)a0;
- (void)_startPrefetchIfNeeded;
- (void)freeTask:(id)a0;
- (void)_prefetchWithURLString:(id)a0 size:(unsigned long long)a1 group:(id)a2 wifiOnly:(BOOL)a3 successBlock:(id /* block */)a4 failureBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
- (void)_clear;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

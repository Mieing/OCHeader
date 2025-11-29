@class TTHttpTask, NSString;

@interface AWECacheHttpTaskWrapper : NSObject <AWEHttpTask>

@property (retain, nonatomic) TTHttpTask *httpTask;
@property (readonly) long long state;
@property (copy, nonatomic) NSString *cacheKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCacheKey:(id)a0;
- (void)continueNetworkTaskBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)suspend;
- (void)setPriority:(float)a0;
- (void)resume;
- (void)cancel;

@end

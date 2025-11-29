@class NSThread, NSString, NSRecursiveLock;

@interface MMXNetImageApplication : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSRecursiveLock *modelLock;
@property (nonatomic) struct shared_ptr<wevision::XImageFeat> { struct XImageFeat *__ptr_; struct __shared_weak_count *__cntrl_; } model;
@property (retain, nonatomic) NSThread *thread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceClearMemoryCache:(unsigned long long)a0 addedUserType:(unsigned long long)a1;
- (void)onServiceClearMemoryCacheInBackground;
- (void)addThreadToRunLoop;
- (id)featureWithImage:(id)a0;
- (void)requestFeatureWithImage:(id)a0;
- (id)getThreadName;
- (id)modelFiles;
- (id)modelPath;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

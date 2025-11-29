@class NSMutableArray;

@interface DAVResourceManager_OC : NSObject

@property (retain, nonatomic) NSMutableArray *handlers;
@property (nonatomic) struct shared_ptr<davinci::resource::DAVResourceManager> { struct DAVResourceManager *__ptr_; struct __shared_weak_count *__cntrl_; } internalResourceManager;

+ (id)getDefaultResourceManager;

- (void)fetchWithResource:(id)a0 extraParams:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)getResourceFromCacheWithResourceId:(id)a0 extraParams:(id)a1;
- (void)registerResourceHandler:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end

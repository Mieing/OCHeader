@interface UnisusPluginGroup : NSObject {
    struct shared_ptr<uni::service::plugin::PluginGroup> { struct PluginGroup *__ptr_; struct __shared_weak_count *__cntrl_; } _ref;
}

+ (id)from:(id)a0 plugins:(id)a1;

- (id)open:(id)a0 error:(id *)a1;
- (void)prefetchPlugins:(id)a0 callback:(id /* block */)a1;
- (BOOL)has:(id)a0;
- (BOOL)checkIndustryPluginVersion:(id)a0;
- (void)useRemotePlugin:(id)a0 url:(id)a1;
- (long long)getPackageState:(id)a0;
- (void)waitForFile:(id)a0 path:(id)a1 cb:(id /* block */)a2;
- (id)init:(id)a0 plugins:(id)a1;
- (long long)getFileState:(id)a0 path:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct shared_ptr<uni::service::plugin::PluginGroup> { struct PluginGroup *x0; struct __shared_weak_count *x1; })ref;

@end

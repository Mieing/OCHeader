@interface PIAOfflineResourceObtainer : NSObject

+ (void)obtainResourceWithURL:(id)a0 completion:(id /* block */)a1;
+ (id)obtainResourceSyncWithURL:(id)a0 error:(id *)a1;

@end

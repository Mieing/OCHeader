@class DAVResourceManager_OC, NSString;

@interface ProcessorDownloader : NSObject <ProcessorDownloaderProtocol> {
    struct shared_ptr<davinci::resource::DAVResourceManager> { struct DAVResourceManager *__ptr_; struct __shared_weak_count *__cntrl_; } resourceManager;
}

@property (retain, nonatomic) DAVResourceManager_OC *resourceManagerOC;
@property (nonatomic) BOOL isVaild;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)downloadWithConfig:(id)a0 callback:(id /* block */)a1;
- (int)downloadWithOC:(id)a0 callback:(id /* block */)a1;
- (int)downloadWithCpp:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

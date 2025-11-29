@class AWEDavinciWrapperConfig;

@interface AWEDavinciWrapper : NSObject {
    struct shared_ptr<davinci::resource::DAVResourceManager> { struct DAVResourceManager *__ptr_; struct __shared_weak_count *__cntrl_; } _resourceManager;
}

@property (retain, nonatomic) AWEDavinciWrapperConfig *config;

- (void)setupResourceManager;
- (const char *)UTF8String:(id)a0;
- (void)loadAlgorithmResource:(id)a0 handler:(id /* block */)a1;
- (void)loadLokiResource:(id)a0 handler:(id /* block */)a1;
- (void)loadArtistResource:(id)a0 handler:(id /* block */)a1;
- (void)loadMediaResource:(id)a0 handler:(id /* block */)a1;
- (BOOL)algorithmResourceHasLocalCache:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfig:(id)a0;

@end

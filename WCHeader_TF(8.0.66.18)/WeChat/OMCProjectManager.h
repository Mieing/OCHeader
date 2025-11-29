@interface OMCProjectManager : NSObject

@property (nonatomic) void *backingProjectManager;

- (id)initWithBackingProjectManager:(void *)a0;
- (void)cancelPrepareProjectResource:(id)a0;
- (void)prepareProjectResource:(id)a0 willFetchHandler:(id /* block */)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)loadProjectFromData:(id)a0;
- (id)loadProjectFromClipbundleFilePath:(id)a0;
- (id)extractPHLocalIdentifiersFromProject:(id)a0;

@end

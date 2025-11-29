@class BDLOCStorage;

@interface BDLOCPkgDownloader : NSObject

@property (retain, nonatomic) BDLOCStorage *storage;
@property long long downloadUrlIdx;

- (void)downloadWithProgressCallback:(id /* block */)a0 completion:(id /* block */)a1;
- (void)startNextDownloadWithProgressCallback:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithStorage:(id)a0;

@end

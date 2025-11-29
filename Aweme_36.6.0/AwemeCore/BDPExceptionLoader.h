@class NSString;

@interface BDPExceptionLoader : NSObject <BDPFileHandleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)basic;
- (long long)createLoadStatus;
- (BOOL)usedCacheMeta;
- (void)readDataWithFilePath:(id)a0 syncIfDownloaded:(BOOL)a1 dispatchQueue:(id)a2 completion:(id /* block */)a3;
- (id)urlOfDataWithFilePath:(id)a0 error:(id *)a1;
- (void)readDataWithFilePath:(id)a0 dispatchQueue:(id)a1 completion:(id /* block */)a2;
- (id)readDataWithFilePath:(id)a0 error:(id *)a1;
- (void)addCompletionByPagePath:(id)a0 blk:(id /* block */)a1;
- (long long)fileSizeInPkgAtPath:(id)a0;
- (void)readDataURLWithFilePath:(id)a0 dispatchQueue:(id)a1 completion:(id /* block */)a2;
- (void)addPkgHeaderDidParseBlk:(id /* block */)a0;
- (void)appContainerWillBeClosed;
- (void)cancelAllReadDataCompletionBlks;
- (void)addLoadProgressBlk:(id /* block */)a0;
- (void)removeAllLoadProgressBlks;
- (void)checkExistedFileInPkg:(id)a0 withCompletion:(id /* block */)a1;
- (void)getFileSizeInPkg:(id)a0 withCompletion:(id /* block */)a1;
- (void)getContentsOfDirAtPath:(id)a0 withCompletion:(id /* block */)a1;
- (void)addCompletionBlk:(id /* block */)a0;
- (BOOL)fileExistsInPkgAtPath:(id)a0;
- (id)contentsOfPkgDirAtPath:(id)a0;
- (long long)loadStatus;

@end

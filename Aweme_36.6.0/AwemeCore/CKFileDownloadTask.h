@class CKDownloadInfo_OC, NSMutableArray, NSProgress;

@interface CKFileDownloadTask : NSObject

@property BOOL hasRegisteredObserver;
@property (retain, nonatomic) CKDownloadInfo_OC *downloadInfo;
@property (readonly, nonatomic) NSMutableArray *progressBlocks;
@property (readonly, nonatomic) NSMutableArray *completionBlocks;
@property (retain, nonatomic) NSProgress *progress;

- (void)safeRemoveObserver;
- (id)initWithDownloadInfo:(id)a0 progressBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)addCallback:(id /* block */)a0 completion:(id /* block */)a1;
- (void)callbackProgress:(id)a0 progressModel:(id)a1;
- (void)callbackCompletion:(id)a0 completionModel:(id)a1;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)handleProgress:(double)a0;

@end

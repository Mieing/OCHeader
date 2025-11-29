@class NSOperationQueue;

@interface LVVideoCompressor : NSObject

@property (class, readonly) LVVideoCompressor *shared;

@property (retain, nonatomic) NSOperationQueue *queue;

- (void)compressWtihAsset:(id)a0 config:(id)a1 progressHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)_needCompressWithAsset:(id)a0 config:(id)a1 error:(id *)a2;
- (BOOL)_needTranscodeForHDR10Bit:(id)a0 config:(id)a1;
- (BOOL)shouldCompressWithAsset:(id)a0 config:(id)a1 error:(id *)a2;
- (BOOL)shouldCompressWithAsset:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_addTask:(id)a0;
- (void)cancelAllTasks;

@end

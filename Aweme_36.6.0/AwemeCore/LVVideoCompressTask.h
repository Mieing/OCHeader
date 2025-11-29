@class LVVideoCompressConfig, NSTimer, AVURLAsset, AVAssetExportSession, VELVCompileManager;

@interface LVVideoCompressTask : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (retain, nonatomic) AVURLAsset *asset;
@property (retain, nonatomic) LVVideoCompressConfig *config;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AVAssetExportSession *exportSession;
@property (retain, nonatomic) VELVCompileManager *compileManager;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL needCompress;
@property (nonatomic) BOOL needTranscodeHDR10bit;

- (void)compressWithVECompileManager:(BOOL)a0;
- (void)compressUseExportSession:(BOOL)a0;
- (void)finishWithAsset:(id)a0;
- (void)observeSessionProgress;
- (id)initWithAsset:(id)a0 config:(id)a1 progressHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)setExecuting:(BOOL)a0;
- (void)setFinished:(BOOL)a0;
- (struct CGSize { double x0; double x1; })targetSize;
- (void)finish;
- (BOOL)isAsynchronous;
- (void)start;
- (void)finishWithError:(id)a0;
- (BOOL)isExecuting;
- (void)main;
- (void)cancel;
- (BOOL)isFinished;
- (id)presetName;

@end

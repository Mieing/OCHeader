@class NSString, NSFileManager, IESAVAssetReverse, AVURLAsset;

@interface LVVideoReverseOperation : NSOperation <LVProgressTask> {
    NSString *_taskID;
    AVURLAsset *_reversedVideo;
    BOOL _ready;
    BOOL _executing;
    BOOL _finished;
}

@property (retain, nonatomic) IESAVAssetReverse *reverseAsset;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (copy, nonatomic) NSString *targetPath;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAsset:(id)a0 targetPath:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setExecuting:(BOOL)a0;
- (BOOL)isReady;
- (void)setFinished:(BOOL)a0;
- (void)finish;
- (BOOL)isAsynchronous;
- (void)start;
- (void)finishWithError:(id)a0;
- (id)taskID;
- (BOOL)isExecuting;
- (void)setReady:(BOOL)a0;
- (void)cancel;
- (BOOL)isFinished;

@end

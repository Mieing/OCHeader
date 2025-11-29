@class NSMutableArray, MMImagePickerVideoTask;

@interface MMImagePickerVideoCompressQueue : NSObject

@property (retain, nonatomic) NSMutableArray *videoCompressTasks;
@property (retain, nonatomic) MMImagePickerVideoTask *runningTask;
@property (nonatomic) BOOL cancelled;

- (id)init;
- (void)addCompressTask:(id)a0 videoAsset:(id)a1 videoUrl:(id)a2 scene:(unsigned long long)a3 complete:(id /* block */)a4;
- (void)checkNextTask;
- (void)runTask:(id)a0;
- (void)cancel;
- (void).cxx_destruct;

@end

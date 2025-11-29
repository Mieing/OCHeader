@class NSString, NSArray, AVAssetExportSession;

@interface IESMMAVExporter : NSObject

@property (retain, nonatomic) AVAssetExportSession *exportSession;
@property (nonatomic) struct CGSize { double width; double height; } defaultOutputSize;
@property (nonatomic) long long exportRetryCount;
@property (nonatomic) long long rotation;
@property (nonatomic) long long previewMode;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (copy, nonatomic) NSString *presetName;
@property (nonatomic) BOOL disableVideoCompostion;
@property (retain, nonatomic) NSArray *metadata;
@property (copy, nonatomic) NSString *videoCacheDirPath;

- (double)getProgress;
- (id)videoCompsitionWithAsset:(id)a0;
- (void)exportVideoData:(id)a0 needResize:(BOOL)a1 completeBlock:(id /* block */)a2;
- (void)exportAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 needResize:(BOOL)a2 completeBlock:(id /* block */)a3;
- (id)videoCompsitionWithAsset:(id)a0 needResize:(BOOL)a1 exportOutputSize:(struct CGSize { double x0; double x1; })a2;
- (void)exportVideoData:(id)a0 completeBlock:(id /* block */)a1;
- (void)exportAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 completeBlock:(id /* block */)a2;
- (void)exportAssetNoAudio:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 completeBlock:(id /* block */)a2;
- (id)removeAudioTrack:(id)a0;
- (id)getExportSession;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end

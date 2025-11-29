@class AVAssetReader;

@interface IESSCExportReader : NSObject

@property (retain, nonatomic) AVAssetReader *videoReader;
@property (retain, nonatomic) AVAssetReader *audioReader;

- (id)setupVideoReaderForAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 inputSettings:(id)a2 videoComposition:(id)a3;
- (id)setupAudioReaderForAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 settings:(id)a2 audioMix:(id)a3;
- (id)startReadingVideo;
- (id)startReadingAudio;
- (id)restartVideoReaderForAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 inputSettings:(id)a2 videoComposition:(id)a3;
- (id)restartAudioReaderForAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 settings:(id)a2 audioMix:(id)a3;
- (void).cxx_destruct;
- (id)error;
- (BOOL)isCancelled;
- (void)reset;
- (BOOL)isAvailable;
- (void)cancelReading;
- (id)startReading;
- (BOOL)isReading;

@end

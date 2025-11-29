@class AVAssetReader;

@interface TAVSourceExportReader : NSObject

@property (retain, nonatomic) AVAssetReader *videoReader;
@property (retain, nonatomic) AVAssetReader *audioReader;

- (BOOL)isReading;
- (BOOL)isReadingError;
- (BOOL)isCancelled;
- (void)reset;
- (id)error;
- (BOOL)isAvailable;
- (id)setupVideoReaderForAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 inputSettings:(id)a2 videoComposition:(id)a3;
- (id)setupAudioReaderForAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 settings:(id)a2 audioMix:(id)a3;
- (void)cancelReading;
- (id)startReading;
- (id)restartVideoReaderForAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 inputSettings:(id)a2 videoComposition:(id)a3;
- (id)restartAudioReaderForAsset:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 settings:(id)a2 audioMix:(id)a3;
- (void).cxx_destruct;

@end

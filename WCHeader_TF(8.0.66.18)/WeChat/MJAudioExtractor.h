@interface MJAudioExtractor : NSObject

@property BOOL isCanceled;

+ (id)defaultAudioOutputSettings;
+ (id)regulateAudioOutputSettings:(id)a0;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)extractAudioDataWithFilePath:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 audioOutputSettings:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)extractSilkDataWithFilePath:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 settings:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)extractPCMDataWithFilePath:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 settings:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)addWavHeaderIfNeededWithPCMData:(id)a0 settings:(id)a1;

@end

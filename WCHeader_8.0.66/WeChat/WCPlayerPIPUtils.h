@interface WCPlayerPIPUtils : NSObject

+ (id)GetPathOfPipAssetResource;
+ (id)GetPathOfTmpPipAssetResource;
+ (id)GetBundleVideoPath;
+ (BOOL)spliceVideoWithAsset:(id)a0 durationSec:(double)a1 compositionTrack:(id)a2 ofTracks:(id)a3;
+ (void)asyncGetComposePipVideoPathWithCompletion:(id /* block */)a0;
+ (void)buildCompositionWithVideoSize:(struct CGSize { double x0; double x1; })a0 filePath:(id)a1 durationSec:(double)a2 completionHandler:(id /* block */)a3;
+ (void)buildPlayerItemWithVideoSize:(struct CGSize { double x0; double x1; })a0 durationSec:(double)a1 completionHandler:(id /* block */)a2;
+ (struct __CVBuffer { } *)generatePixBufferWithVideoSize:(struct CGSize { double x0; double x1; })a0;

@end

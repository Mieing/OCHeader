@class AVURLAsset;

@interface BDPPluginWKScreenRecorder_HG : BDPBridgeInstancePlugin

@property (retain, nonatomic) AVURLAsset *asset;

- (void)exportVideoWithAsset:(id)a0 outputURL:(id)a1 completion:(id /* block */)a2;
- (void)addWaterMark:(id)a0 waterMarkImg:(id)a1 position:(struct CGPoint { double x0; double x1; })a2 size:(struct CGSize { double x0; double x1; })a3 absPath:(id)a4 ttFilePath:(id)a5 completion:(id /* block */)a6;
- (void)performanceRecordStartWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)performanceRecordStopWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)performanceRecordClipWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)performanceRecordMergeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end

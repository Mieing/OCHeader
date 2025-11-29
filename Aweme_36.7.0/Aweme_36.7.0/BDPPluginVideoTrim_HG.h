@class AVURLAsset;

@interface BDPPluginVideoTrim_HG : BDPBridgeInstancePlugin

@property (retain, nonatomic) AVURLAsset *asset;

- (id)transferToTrimVideoPathFromOriginVideoPath:(id)a0;
- (void)exportVideoWithAsset:(id)a0 outputURL:(id)a1 completion:(id /* block */)a2;
- (void)clipVideoForRecorderWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end

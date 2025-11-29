@interface BDPPluginMediaPicker : BDPBridgeInstancePlugin

@property (nonatomic) long long videoCounts;
@property (nonatomic) long long currentVideoCounts;

- (id)dealImageDataBackWithImages:(id)a0 common:(id)a1 param:(id)a2;
- (void)dealVideoDataBackWithVideos:(id)a0 common:(id)a1 sourceType:(unsigned long long)a2 model:(id)a3 callback:(id /* block */)a4 completion:(id /* block */)a5;
- (void)chooseMediaWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)dealVideoDataBackWithVideosV2:(id)a0 common:(id)a1 sourceType:(unsigned long long)a2 model:(id)a3 callback:(id /* block */)a4 completion:(id /* block */)a5;

@end

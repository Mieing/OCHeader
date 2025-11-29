@class NSTimer, NSMutableArray;

@interface BDPPluginVideoEdit_HG : BDPBridgeInstancePlugin

@property (retain, nonatomic) NSMutableArray *tmpMediaFilePaths;
@property (retain, nonatomic) NSTimer *mergeVideoTimer;

- (void)addAudioTrackWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)mergeVideoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end

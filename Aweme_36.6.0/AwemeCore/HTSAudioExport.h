@class AVAssetWriterInput, NSString, VEAudioReaderUnit, AVAssetExportSession, AVAssetWriter;

@interface HTSAudioExport : IESMMObject {
    BOOL _exportFinishedForAudioInputOnly;
}

@property (retain, nonatomic) AVAssetExportSession *audioExportSession;
@property (retain, nonatomic) VEAudioReaderUnit *audioReaderUnit;
@property (retain, nonatomic) AVAssetWriterInput *audioInput;
@property (retain, nonatomic) AVAssetWriter *writer;
@property (retain, nonatomic) NSString *audioExportDir;

- (BOOL)exportAudioWithVideoData:(id)a0 exportAudioType:(int)a1 completion:(id /* block */)a2;
- (BOOL)exportVideoSoundSourceWithVideoData:(id)a0 applyAudioMix:(BOOL)a1 completion:(id /* block */)a2;
- (void)exportM4aProcess:(id)a0 videoItem:(id)a1 completion:(id /* block */)a2;
- (void)exportAllAudioSoundInVideoData:(id)a0 customParams:(id)a1 completion:(id /* block */)a2;
- (BOOL)exportAudioWithVideoData:(id)a0 completion:(id /* block */)a1;
- (BOOL)exportAudioWithVideoData:(id)a0 isOriSound:(BOOL)a1 completion:(id /* block */)a2;
- (void)cancelAudioExport;
- (double)getAudioExportProgress;
- (void)exportAllAudioSoundInVideoData:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

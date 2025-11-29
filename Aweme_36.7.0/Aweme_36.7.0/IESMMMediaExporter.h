@class VEAudioReaderUnit, NSString, AVAssetWriterInput, AVAssetWriter, AVAssetExportSession, IESMMAudioFile, IESExtAudioFileWriter;

@interface IESMMMediaExporter : IESMMObject

@property (nonatomic) NSString *aFileType;
@property (nonatomic) NSString *vFileType;
@property (retain, nonatomic) AVAssetExportSession *exportSession;
@property (nonatomic) BOOL exportFinish;
@property (retain, nonatomic) IESMMAudioFile *audioReader;
@property (retain, nonatomic) IESExtAudioFileWriter *audioWriter;
@property (nonatomic) BOOL isResampleInterrupt;
@property (retain, nonatomic) VEAudioReaderUnit *audioReaderUnit;
@property (retain, nonatomic) AVAssetWriterInput *audioInput;
@property (retain, nonatomic) AVAssetWriter *writer;
@property (nonatomic) unsigned long long retryCount;
@property (readonly, nonatomic) double progress;

- (void)exportAllAudioSoundInVideoData:(id)a0 resampleConfig:(id)a1 completion:(id /* block */)a2;
- (void)exportAudioFromMedia:(id)a0 isNeedsResample:(BOOL)a1 resampleConfig:(id)a2 compltionHandler:(id /* block */)a3;
- (void)_exportAllAudioSoundWithResampleConfig:(id)a0 asset:(id)a1 completion:(id /* block */)a2;
- (void)__muxVideo:(id)a0 andAudio:(id)a1 completionHandler:(id /* block */)a2;
- (void)__prepareExportWithType:(long long)a0 isNeedsResample:(BOOL)a1 resampleAudioConfig:(id)a2 completionHandler:(id /* block */)a3;
- (void)__exportWithType:(long long)a0 isNeedsResample:(BOOL)a1 resampleAudioConfig:(id)a2 completionHandler:(id /* block */)a3;
- (void)resample:(id)a0 resampleAudioConfig:(id)a1 completionHandler:(id /* block */)a2;
- (id)createAudioWriter:(int)a0 inAudioConfig:(id)a1;
- (void)p_updateAudioTimeRate:(id)a0;
- (void)p_updateAudioVolume:(id)a0;
- (void)exportAudioFromVideoData:(id)a0 isNeedsResample:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)exportAudioFromMedia:(id)a0 isNeedsResample:(BOOL)a1 compltionHandler:(id /* block */)a2;
- (void)exportMediaWithVideo:(id)a0 audio:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancelExport;

@end

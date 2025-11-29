@interface AQAudioRecorder : BaseAudioRecorder

@property (nonatomic) BOOL needRestartMusic;
@property (nonatomic) BOOL needRestartAudioTalk;
@property (nonatomic) unsigned long long firstTimeStamp;
@property (nonatomic) float pcmSampleRate;
@property (nonatomic) BOOL disableWritingToFile;
@property (nonatomic) BOOL enableMultiChannel;
@property (nonatomic) unsigned int maxAudioChannels;

- (void)createAudioFile_WAVE:(id)a0 Fd:(struct OpaqueAudioFileID **)a1;
- (void)setDataFormat_PCM;
- (void)prepareBuffers;
- (void)setMagicCookieToAudioFile:(struct OpaqueAudioFileID { } *)a0;
- (id)init;
- (BOOL)shouldAutoRestartWith:(int)a0;
- (BOOL)canAutoRestart;
- (BOOL)prepareRecordWithPCMFile:(id)a0;
- (void)record;
- (void)cleanResource;
- (void)autostop;

@end

@class NSArray, AVAssetExportSession;

@interface KSIpodAudioDataProvider : KSAudioDataProvider {
    BOOL _isReady;
    AVAssetExportSession *_exportSession;
}

@property (retain, nonatomic) NSArray *fileTypes;

- (id)initWithSongInfo:(id)a0 queue:(id)a1 context:(void *)a2;
- (void)dealloc;
- (void)close:(BOOL)a0;
- (BOOL)prepareAudioData;
- (BOOL)isReady;
- (id)audioFileTypes;
- (id)mimeType;
- (void)exportdidComplete;
- (void).cxx_destruct;

@end

@class NSString;

@interface KSLocalFileAudioDataProvider : KSAudioDataProvider

@property (retain, nonatomic) NSString *audioFileExt;

- (id)initWithSongInfo:(id)a0 queue:(id)a1 context:(void *)a2;
- (void)dealloc;
- (BOOL)prepareAudioData;
- (BOOL)isReady;
- (void)close:(BOOL)a0;
- (id)audioFileExtension;
- (void).cxx_destruct;

@end

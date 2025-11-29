@interface TXCMusicResourceDecoderAppleDelegateAdapter : NSObject <TXCMusicResourceDecoderAppleDelegate>

@property (nonatomic) struct MusicResourceDecodeCallback { void /* function */ **x0; } *callback;

- (void)dealloc;
- (void)audioFileReader:(id)a0 didGetAudioData:(void *)a1;
- (void)audioFileReader:(id)a0 onError:(id)a1;
- (void)audioFileReaderDidComplete:(id)a0;

@end

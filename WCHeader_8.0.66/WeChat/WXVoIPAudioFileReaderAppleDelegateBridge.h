@interface WXVoIPAudioFileReaderAppleDelegateBridge : NSObject <AudioFileReaderAppleImplDelegate>

@property (nonatomic) struct AudioDecodeCallback { void /* function */ **x0; } *callback;

- (void)dealloc;
- (void)audioFileReader:(id)a0 didGetAudioData:(struct AudioFrame { void /* function */ **x0; int x1; int x2; int x3; int x4; int x5; BOOL x6; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned short x11; int x12; int x13; int x14; int x15; unsigned short x16; char *x17; int x18; int x19; BOOL x20; } *)a1;
- (void)audioFileReader:(id)a0 onError:(id)a1;
- (void)audioFileReaderDidComplete:(id)a0;

@end

@interface NewQVIVoiceAnalysis : NSObject {
    void *SpeexContex;
}

+ (id)sharedInstance;

- (id)init;
- (void)speexEncodeInit;
- (void)speexEncodeRelease;
- (id)speexEncode:(id)a0;
- (void)speexDecodeInit;
- (void)speexDecodeRelease;
- (id)speexDecode:(id)a0;
- (void)mfeInitWithSilentTime:(int)a0 andTimeout:(int)a1;
- (void)mfeRelease;
- (void)mfeStart;
- (void)mfeStop;
- (void)mfeDetect:(id)a0 withResult:(id)a1;
- (void)dealloc;

@end

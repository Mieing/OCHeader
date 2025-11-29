@interface IESLiveVideoGiftAudioResampler : NSObject {
    struct SwrContext { } *context;
    int _sampleRate;
    int _channelNumber;
}

- (id)initWithSampleRate:(int)a0 channelNumber:(int)a1;
- (int)convert:(const char **)a0 inSamplersPerChannel:(int)a1 buffer:(char **)a2;
- (void)giveBack:(char **)a0;
- (void)dealloc;
- (BOOL)setup:(id *)a0;

@end

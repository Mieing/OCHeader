@class AVAudioFormat, NSString, NSMutableData;

@interface StreamSilkAudioCodec : NSObject <StreamAudioCodecProtocol> {
    struct StreamAudioDecoder { void *x0; void *x1; int x2; char *x3; int x4; int x5; int x6; int x7; BOOL x8; int x9; int x10; int x11; int x12; void *x13; int x14; int x15; void *x16; } *m_decoder;
    NSMutableData *m_originData;
    NSMutableData *m_decodedData;
    BOOL m_decodeError;
    BOOL m_appendEnd;
}

@property (retain, nonatomic) AVAudioFormat *format;
@property (nonatomic) double sampleRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithSampleRate:(double)a0;
- (void)dealloc;
- (void)setDataForDecode:(id)a0 decodeNow:(BOOL)a1;
- (void)getDecodeData:(void *)a0 time:(unsigned int)a1 frames:(unsigned int *)a2;
- (void)getDecodeData:(void *)a0 playedFrames:(unsigned int)a1 frames:(unsigned int *)a2;
- (void)appendData:(id)a0 decodeNow:(BOOL)a1 lastSlice:(BOOL)a2;
- (void)decodeData;
- (void)initDataFormat;
- (void)initDecoder;
- (void).cxx_destruct;

@end

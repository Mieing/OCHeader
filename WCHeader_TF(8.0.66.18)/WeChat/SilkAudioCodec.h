@class AVAudioFormat, NSString, NSMutableData;

@interface SilkAudioCodec : NSObject <AudioCodecProtocol> {
    struct AudioDecoder { void *x0; void *x1; int x2; char *x3; int x4; int x5; int x6; int x7; int x8; void *x9; int x10; int x11; int x12; int x13; void *x14; } *m_decoder;
    NSMutableData *m_decodedData;
    BOOL m_decodeEnd;
}

@property (retain, nonatomic) AVAudioFormat *format;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setDataForDecode:(id)a0 decodeNow:(BOOL)a1;
- (void)getDecodeData:(void *)a0 time:(unsigned int)a1 frames:(unsigned int *)a2;
- (void)getDecodeData:(void *)a0 playedFrames:(unsigned int)a1 frames:(unsigned int *)a2;
- (void)decodeData;
- (void)initDataFormat:(id)a0;
- (void)initDecoder:(id)a0;
- (BOOL)ifSilkAudioPlayerAgcOn;
- (void).cxx_destruct;

@end

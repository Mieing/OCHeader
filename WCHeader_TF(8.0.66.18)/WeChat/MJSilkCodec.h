@interface MJSilkCodec : NSObject

@property (nonatomic) struct AudioCoder { int allow_dtx; void *psEnc; void *encControl; void *encStatus; int mEncSampleRate; int mPacketlenunit; int mEncFrameCnt; int mEncHasInit; int mNsHasInit; int mLastVoiceMsgFrameflag; int mleftdatanum; void *pstVAD; short bufpcm[5][320]; int vadbuf[5][2]; void *psNsx; } encoder;
@property (nonatomic) long long sampleRate;

+ (id)decodeToPCMFromSilkData:(id)a0;
+ (id)decodeToAudioDataFromSilkData:(id)a0;
+ (id)encodeToSilkFromPCMData:(id)a0;

- (BOOL)initEncoderWithSampleRate:(long long)a0;
- (id)encodeFromPCMData:(id)a0;
- (BOOL)uninitEncoder;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

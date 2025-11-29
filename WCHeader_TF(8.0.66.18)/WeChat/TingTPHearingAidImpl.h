@class NSString;

@interface TingTPHearingAidImpl : NSObject

@property (nonatomic) struct IWaveAudioHAidInterface { void /* function */ **x0; } *coreImpl;
@property (nonatomic) int hAidType;
@property (nonatomic) int hAidScene;
@property (nonatomic) int hAidDevice;
@property (nonatomic) int sampleNum;
@property (nonatomic) int sampleBuffSize;
@property (nonatomic) struct mach_timebase_info { unsigned int numer; unsigned int denom; } timeBase;
@property (retain, nonatomic) NSString *tmpDataPath;
@property (retain, nonatomic) NSString *tmpOutDataPath;

- (id)initWithType:(int)a0 device:(int)a1 ttsScene:(BOOL)a2;
- (void)dealloc;
- (BOOL)setupWithMetaData:(id)a0;
- (int)getSampleBufSize;
- (id)onNotifyAudioProcessFrameOut:(id)a0;
- (void).cxx_destruct;

@end

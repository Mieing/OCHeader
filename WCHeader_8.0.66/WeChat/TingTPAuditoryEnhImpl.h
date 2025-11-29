@class NSString;

@interface TingTPAuditoryEnhImpl : NSObject

@property (nonatomic) struct IWaveAuditoryEnhInterface { void /* function */ **x0; } *coreImpl;
@property (nonatomic) int auditoryEnhMode;
@property (nonatomic) int sampleNum;
@property (nonatomic) int sampleBuffSize;
@property (retain, nonatomic) NSString *tmpDataPath;

- (id)initWithEnhMode:(int)a0;
- (void)dealloc;
- (BOOL)setupWithMetaData:(id)a0;
- (int)getSampleBufSize;
- (id)getEffectArgs;
- (id)onNotifyAudioProcessFrameOut:(id)a0;
- (void).cxx_destruct;

@end

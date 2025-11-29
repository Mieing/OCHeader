@class NSString, VoicePrintMgr;

@interface VoicePrintEnvironmentChecker : NSObject <WCAudioModuleDelegate, IVoicePrintMgrExt>

@property (nonatomic) double averageAudioPeak;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=hasFinished) BOOL finished;
@property (retain, nonatomic) VoicePrintMgr *voicePrintManager;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManger:(id)a0;
- (void)dealloc;
- (void)checkEnvironmentWithCompletion:(id /* block */)a0;
- (void)check;
- (void)finishWithPassed:(BOOL)a0;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)OnEnviromentCheckModeLevelMeter:(unsigned int)a0 Peak:(float)a1;
- (void).cxx_destruct;

@end

@class UnitRCWeakPtr, NSString, EVADProcessor;
@protocol TingVADListener;

@interface TingSysVADImpl : UnitRCObjcBaseClass <TingAudioRecorderListener, EVADProcessorDelegate, TingVAD>

@property (retain, nonatomic) UnitRCWeakPtr *listener;
@property (retain, nonatomic) EVADProcessor *evad;
@property (retain, nonatomic) id<TingVADListener> vadListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)stop;
- (void)createEVADProcessor;
- (void)releaseEVADProcessor;
- (void)setVADListener:(id)a0;
- (void)onVADDetectSpeakingToSlience:(long long)a0 data:(id)a1;
- (void)onVADDetectFirstStart:(id)a0;
- (void)onVADDetectSilentTooLong;
- (void)onVADDetectSlienceToSpeaking:(long long)a0 data:(id)a1 HasSpeak:(BOOL)a2;
- (void)onBuffer:(id)a0;
- (void)onAudioRecorderStarted;
- (void).cxx_destruct;

@end

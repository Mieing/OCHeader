@class StreamVoiceInputLogic, NSRecursiveLock, NSString, NSMutableArray;

@interface TingVoiceTranslateManagerObjcStatic : NSObject <TingVoiceTranslateManager, IStreamVoiceInputExt>

@property (retain, nonatomic) NSMutableArray *listenerArray;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) unsigned int inputId;
@property (retain, nonatomic) StreamVoiceInputLogic *streamVoiceInputLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)notifyListeners:(id /* block */)a0;
- (void)_notifyListeners:(id /* block */)a0;
- (id)init;
- (void)start:(id /* block */)a0;
- (void)stop:(id /* block */)a0;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)OnStartRecord:(unsigned int)a0;
- (void)OnEndRecord:(unsigned int)a0;
- (void)OnLevelMeter:(unsigned int)a0 Peak:(float)a1;
- (void)onGetResultText:(id)a0 andInputId:(unsigned int)a1;
- (void)OnError:(int)a0 andInputId:(unsigned int)a1;
- (void)OnVoiceTransEnd:(unsigned int)a0;
- (void)onVoiceSilentTooLong:(unsigned int)a0;
- (void)onVoiceDetectSilenceToSpeakingWithInputId:(unsigned int)a0 time:(long long)a1 data:(id)a2;
- (void).cxx_destruct;

@end

@class RTVXRBaseBusinessHandler, NSDictionary, NSString;
@protocol RTVXRRoomSessionControllerInterface, RTVXRControllerInjector;

@interface RTVEffectGamePlayAudioWrapper : NSObject <RTVEffectGamePlayAudioWrapper, RTVXRControllerInterface>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) RTVXRBaseBusinessHandler<RTVXRRoomSessionControllerInterface> *roomController;
@property (readonly, copy, nonatomic) NSDictionary *soundIdentifierMap;
@property (readonly, copy, nonatomic) NSDictionary *soundPlayTimeMap;
@property (nonatomic) long long currentPlayVolume;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)notifyChangeActive:(BOOL)a0;
- (id)preloadWithFilePaths:(id)a0;
- (id)playAudioWithFilePath:(id)a0 loop:(BOOL)a1 volume:(id)a2;
- (id)replayAudioWithFilePath:(id)a0 loop:(BOOL)a1;
- (id)stopAudioWithFilePath:(id)a0;
- (id)pauseAudioWithFilePath:(id)a0;
- (id)resumeAudioWithFilePath:(id)a0;
- (id)unloadAllEffects;
- (id)adjustGameAudioVolume:(long long)a0;
- (id)__soundIdentifierOfFilePath:(id)a0;
- (double)__millisecondsSince1970;
- (void).cxx_destruct;
- (id)stopAllEffects;
- (id)__engine;

@end

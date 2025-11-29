@class NSString;
@protocol ACCRecorderProtocol, ACCAudioPortService;

@interface AWEStickerApplyAudioEffectHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber, ACCRecordSwitchModeServiceSubscriber>

@property (weak, nonatomic) id<ACCAudioPortService> audioPortService;
@property (retain, nonatomic) id<ACCRecorderProtocol> recorder;
@property (nonatomic) BOOL isComponentAppeared;
@property (nonatomic) long long currentMusicPlayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)flowServiceDidAddFragment:(id)a0;
- (void)startAudioCaptureIfNeeded;
- (id)currentSticker;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void)handlerDidBecomeActive;
- (long long)musicPlayNodeWithIOPort:(long long)a0;
- (void)updateMusicPlayMode:(long long)a0;
- (BOOL)disableAutoStartAudioCaptureAfterApplyGameControlProp;
- (void).cxx_destruct;

@end

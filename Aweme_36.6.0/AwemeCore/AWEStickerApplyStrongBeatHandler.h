@class NSString, IESEffectModel;

@interface AWEStickerApplyStrongBeatHandler : AWEStickerApplyBaseHandler <ACCRecordConfigAudioHandler>

@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishConfigAudioWithSetMusicCompletion:(id /* block */)a0;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)handlerDidBecomeActive;
- (void)p_configStrongBeatStickerIfNeeded:(id)a0;
- (void).cxx_destruct;

@end

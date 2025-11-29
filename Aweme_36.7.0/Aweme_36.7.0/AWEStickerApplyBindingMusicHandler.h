@class IESEffectModel, ACCRecordSelectMusicServiceImpl;
@protocol ACCMusicModelProtocol;

@interface AWEStickerApplyBindingMusicHandler : AWEStickerApplyBaseHandler

@property (retain, nonatomic) IESEffectModel *currentAppliedSticker;
@property (retain, nonatomic) IESEffectModel *lastWillApplyProp;
@property (retain, nonatomic) id<ACCMusicModelProtocol> currentMusic;
@property (retain, nonatomic) ACCRecordSelectMusicServiceImpl *viewModel;
@property (retain, nonatomic) id<ACCMusicModelProtocol> recoverMusic;
@property (nonatomic) long long recoverMusicSource;

- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (BOOL)shouldRecoverMusic;
- (BOOL)p_shouldPickForceBindMusic:(id)a0;
- (void).cxx_destruct;

@end

@class AWEVideoPublishViewModel, ACCVoiceEffectManager;
@protocol ACCEditServiceProtocol;

@interface AWEVideoDraftPlayerMusicHandler : NSObject

@property (nonatomic) struct CGSize { double width; double height; } backupCanvasSize;
@property (retain, nonatomic) ACCVoiceEffectManager *voiceEffectManager;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;

- (id)publishViewModel;
- (void)fetchVoiceEffectIfNecessaryWithCallback:(id /* block */)a0;
- (void)recoverVoiceEffectFromDraftIfNecessaryWithCompletion:(id /* block */)a0;
- (void)p_recoverClassicalMVIfNecessary;
- (void)recoverAudioWithOption:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)recoverAudioIfNeededWithOption:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)p_resetPlayerAfterRecover;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredImageSize;

@end

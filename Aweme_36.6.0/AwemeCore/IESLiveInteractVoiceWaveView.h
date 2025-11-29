@class UIImageView, HTSLiveImage;
@protocol IESLiveWebImageService, IESLiveWebPPlayer;

@interface IESLiveInteractVoiceWaveView : UIView

@property (weak, nonatomic) id<IESLiveWebImageService> webImageService;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *voiceWaveWebpView;
@property (nonatomic) BOOL needSilenceHide;
@property (retain, nonatomic) HTSLiveImage *image;

- (void)startPlayVoiceWave;
- (void)stopPlayVoiceWave;
- (void)updateVoiceWaveResource:(id)a0 needSilenceHide:(BOOL)a1 loopCompletion:(id /* block */)a2;
- (BOOL)hasVoiceWaveResource;
- (void)createVoiceWaveView;
- (void)clearVoiceWaveView;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

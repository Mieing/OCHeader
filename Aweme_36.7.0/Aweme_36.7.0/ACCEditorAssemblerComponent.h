@class ACCEditorVolumeComponent, ACCEditorStickerComponent, ACCEditorMusicComponent;
@protocol ACCEditServiceProtocol;

@interface ACCEditorAssemblerComponent : ACCEditorComponent

@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCEditorStickerComponent *stickerComponent;
@property (retain, nonatomic) ACCEditorVolumeComponent *volumeComponent;
@property (retain, nonatomic) ACCEditorMusicComponent *musicComponent;
@property (nonatomic) BOOL environmentLoad;

- (void)setupWithCompletion:(id /* block */)a0;
- (void)configEnvironmentIfNeed;
- (void)configEnvironment;
- (void).cxx_destruct;
- (void)setRepository:(id)a0;
- (id)initWithServiceProvider:(id)a0;

@end

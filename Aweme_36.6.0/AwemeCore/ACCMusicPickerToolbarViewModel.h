@class NSArray, ACCMusicPanelAudioEditToolBarModel, ACCMusicUIThemeModel;
@protocol ACCMusicVolumeViewModelProtocol, ACCEditMusicServiceProtocol;

@interface ACCMusicPickerToolbarViewModel : NSObject

@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) id<ACCMusicVolumeViewModelProtocol> volumeViewModel;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicViewModel;
@property (weak, nonatomic) ACCMusicPanelAudioEditToolBarModel *voiceItem;
@property (weak, nonatomic) ACCMusicPanelAudioEditToolBarModel *bgmItem;
@property (weak, nonatomic) ACCMusicPanelAudioEditToolBarModel *beatsItem;
@property (weak, nonatomic) ACCMusicPanelAudioEditToolBarModel *autoCaptionItem;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;

- (void)updateBeatsEnable;
- (void)setupBinding;
- (id)initWithItems:(id)a0 musicViewModel:(id)a1 volumeViewModel:(id)a2;
- (void)bindBeatsItem;
- (void)updateAutoCaptionEnable:(BOOL)a0;
- (void).cxx_destruct;

@end

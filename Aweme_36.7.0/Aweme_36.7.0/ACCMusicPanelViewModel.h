@class AWEVideoPublishViewModel;

@interface ACCMusicPanelViewModel : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) float voiceVolume;
@property (nonatomic) float bgmVolume;

- (void)resetPanelShowStatus:(BOOL)a0;
- (id)initWithPublishViewModel:(id)a0;
- (id)deselectedMusicToast;
- (void).cxx_destruct;
- (void)dealloc;

@end

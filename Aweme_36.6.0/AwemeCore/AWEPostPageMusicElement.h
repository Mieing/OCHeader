@class UIView, RACDisposable, ACCPanelViewController, AWEVideoPublishViewModel, AWEPostPageMusicBeatsService, NSString, AWEPublishMusicTableViewCell, UIColor;
@protocol ACCMusicBizComponentProtocol, ACCScrollStringButtonProtocol;

@interface AWEPostPageMusicElement : AWEPostPageCellElement <AWEPublishMusicTableViewCellDelegate, ACCMusicPickerBizComponentDelegate, ACCMusicClipBizComponentDelegate, ACCPanelViewDelegate, ACCEditMusicServiceDelegate, UIGestureRecognizerDelegate>

@property (readonly, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEPublishMusicTableViewCell *publishMusicCell;
@property (retain, nonatomic) UIView<ACCScrollStringButtonProtocol> *selectMusicCapsule;
@property (retain, nonatomic) ACCPanelViewController *panelViewController;
@property (retain, nonatomic) id<ACCMusicBizComponentProtocol> musicBiz;
@property (nonatomic) BOOL isAutoSdelectingMusic;
@property (retain, nonatomic) AWEPostPageMusicBeatsService *beatService;
@property (nonatomic, getter=isAppearing) BOOL appearing;
@property (nonatomic) BOOL isEditState;
@property (retain, nonatomic) UIColor *musicCapsuleBackgroundColor;
@property (retain, nonatomic) RACDisposable *disapose;
@property (retain, nonatomic) UIView *pickerMaskView;
@property (nonatomic) BOOL needPauseMusicTemporarily;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)panelViewController:(id)a0 willShowPanelView:(id)a1;
- (void)panelViewController:(id)a0 willDismissPanelView:(id)a1;
- (void)elementAppear;
- (id)pickerContainerViewController;
- (BOOL)allowApplyAutoMusicWithEditMusicService:(id)a0;
- (void)updateMusicButtonLayout;
- (unsigned long long)scrollStringAnimationType;
- (BOOL)forceReceiveEvents;
- (id)slidesService;
- (BOOL)imageAlbumShortenCreationEnable;
- (void)setupEditMusicEnv;
- (void)setupMusicData;
- (void)setupSelectMusicCapsuleIfNeed;
- (void)updateMusicUI;
- (void)updateSelectMusicCapsule;
- (void)updateSelectMusicCapsuleCoverAndTitle;
- (void)refreshMusicWhenEditPageSaveBack;
- (void)handleBeginTextEdit;
- (void)handleEndTextEdit;
- (void)updateMusicTableCell;
- (void)selectMusicCapsuleClicked;
- (void)didClickCloseButtonOnMusicCapsule;
- (void)pickerMaskViewTapped;
- (void)didClickedClearOrChooseMusicButton:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (void)viewWillAppear:(BOOL)a0;
- (void)cleanUp;
- (void)viewDidLoad;
- (id)containerViewController;
- (void)viewWillDisappear:(BOOL)a0;
- (id)cell;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)didSelect;
- (void)addObservers;
- (void)showMusicPicker;

@end

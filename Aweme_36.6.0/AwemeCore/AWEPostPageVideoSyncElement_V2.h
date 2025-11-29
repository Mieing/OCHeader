@class NSString, AWEPublishVideoSyncTableViewCellV2, AWEBinding, NSNumber;

@interface AWEPostPageVideoSyncElement_V2 : AWEPublishAndAdvanceSettingsPopupBaseCellElement <AWEPublishAndAdvanceSettingsPopupElementProtocol>

@property (retain, nonatomic) AWEPublishVideoSyncTableViewCellV2 *videoSyncCell;
@property (retain, nonatomic) NSNumber *tooltipsShowed;
@property (nonatomic) BOOL shouldShowToutiaoSyncGuide;
@property (retain, nonatomic) AWEBinding *mixSyncUpdateDoneBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (void)setupCustomSceneRule:(id)a0 context:(id)a1;
+ (long long)registerScene:(id)a0;
+ (id)type;

- (void)showPopoverIfNeeded;
- (id)publishViewModel;
- (void)bindObserver;
- (id)trackCommonParams;
- (void)elementAppear;
- (void)requestVideoSyncModel;
- (void)setupCell:(id)a0;
- (BOOL)forceReceiveEvents;
- (id)advanceSettingsPopupItemConfig;
- (id)videoSyncModel;
- (void)trackVideoSyncTappedWithEnterMethod:(id)a0;
- (void)openSyncPanelWithSelectedList:(id)a0;
- (BOOL)hasDifferent:(id)a0 toNewModel:(id)a1;
- (void)postVideoSyncModel:(id)a0;
- (void)showMixSyncToOtherAppsNoticeIfNeededWithVideoSyncModel:(id)a0;
- (void)updateVideoSyncModelIfNeeded;
- (void)unbindObserver;
- (void)trackVideoSyncShow;
- (void)trackVideoSyncGuideShow;
- (void)trackVideoSyncStatus;
- (void)configShouldShowToutiaoSyncGuide;
- (void)updateEditStatus;
- (id)mixService;
- (id)popoverCacheKey;
- (void)trackTipsShow;
- (void)trackVideoSyncGuideClick;
- (void)updateCellIfNeeded;
- (void).cxx_destruct;
- (id)privacy;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)cell;
- (id)paymentService;
- (void)didSelect;
- (void)updateCell;

@end

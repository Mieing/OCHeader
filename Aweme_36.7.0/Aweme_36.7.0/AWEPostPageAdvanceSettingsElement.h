@class AWENewPublishTableCell, NSString, AWEPublishAdvanceSettingsDataController, AWEPublishAlbumManager;
@protocol IESServiceProvider, AWEPublishAndAdvanceSettingsPopup, AWEPostPageElementCenter;

@interface AWEPostPageAdvanceSettingsElement : AWEPostPageCellElement <AWEPublishHDSettingSubscriber>

@property (retain, nonatomic) AWENewPublishTableCell *advanceSettingsCell;
@property (retain, nonatomic) AWEPublishAdvanceSettingsDataController *advanceSettingsDataController;
@property (retain, nonatomic) AWEPublishAlbumManager *albumSetting;
@property (weak, nonatomic) id<AWEPostPageElementCenter> elementCenter;
@property (weak, nonatomic) id<AWEPublishAndAdvanceSettingsPopup> popup;
@property (weak, nonatomic) id<IESServiceProvider> serviceContainer;
@property (nonatomic) BOOL isShowingDecouplingTips;
@property (nonatomic) BOOL isShowingPaymentHint;
@property (nonatomic) BOOL isViewDidAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)bindServices:(id)a0;
- (void)publishHDSettingDidChangeState:(BOOL)a0;
- (id)productDetectFlow;
- (void)setupCell:(id)a0;
- (void)trackShowAdvancedSettingsEvent;
- (void)configAdvanceSettingsInitialStatus;
- (id)slidesService;
- (void)showHintIfNeeded;
- (void)showPublishAdvanceSettingsPopupWithCompletion:(id /* block */)a0;
- (void)removeAIFollowShootTipsIfNeed;
- (void)removePaymentHintIfNeed;
- (BOOL)showPaymentGuideIfNeed;
- (BOOL)showAIFollowShootTipsIfNeed;
- (id)advanceSettingsService;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)cleanUp;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)cell;
- (void)didSelect;

@end

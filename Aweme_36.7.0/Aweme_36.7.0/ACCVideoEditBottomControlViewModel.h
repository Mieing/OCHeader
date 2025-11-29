@class ACCCameraSubscription, NSString, RACSubject, NSDictionary, RACSignal, NSNumber, ACCVideoEditFlowControlViewModel;
@protocol ACCQuickSaveService, ACCRecordSwitchModeService, ACCVideoEditBottomControlService, ACCVideoEditBottomControlLayout;

@interface ACCVideoEditBottomControlViewModel : ACCEditViewModel <ACCVideoEditBottomControlService>

@property (weak, nonatomic) id<ACCQuickSaveService> quickSaveService;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) RACSubject *shouldUpdatePanelSubject;
@property (copy, nonatomic) NSNumber *enabledValue;
@property (retain, nonatomic) NSDictionary *typeTitleDic;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCVideoEditBottomControlService> editBottomControlService;
@property (readonly, nonatomic) RACSignal *shouldUpdatePanelSignal;
@property (readonly, copy, nonatomic) NSString *publishButtonTitle;
@property (readonly, nonatomic) BOOL showsNextButton;
@property (retain, nonatomic) id<ACCVideoEditBottomControlLayout> layout;
@property (readonly, nonatomic) double bottomControlOriginY;
@property (readonly, nonatomic) BOOL showsPublishButton;
@property (nonatomic) BOOL isSaveTipsShowed;
@property (weak, nonatomic) ACCVideoEditFlowControlViewModel *flowControlViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishButton;
- (BOOL)isNewStoryDailyPublishPageButtonStyleStatus;
- (BOOL)enableToolBarAddShare;
- (void)updatePublishButtonTitle:(id)a0;
- (void)hidePublishButton;
- (void)hideNextButton;
- (void)updatePanelIfNeeded;
- (long long)currentNewBottomLayoutStyle;
- (BOOL)shouldEnableNewBottomLayoutStyle;
- (BOOL)shouldEnableNewBottomLayoutStyleSettings;
- (BOOL)shouldEnableNewBottomLayoutStyleSaveDraft;
- (BOOL)shouldEnableNewBottomLayoutStyleSaveAlbum;
- (BOOL)shouldEnableNewBottomLayoutStyleShare;
- (void)enableButtonAccessibilityElement:(BOOL)a0;
- (BOOL)shouldReplaceDailyPublishWithFriendsDaily;
- (void)clickQuickPublish;
- (void)enableRichTextBottomButtonInteraction:(BOOL)a0;
- (void)notifyDidTap:(id)a0 type:(long long)a1;
- (id)bottomPanelButtonTitleWithType:(long long)a0;
- (id)newBottomLayoutStyleQuickPublishText;
- (id)saveAlbumButton;
- (BOOL)shouldEnableNewBottomLayoutStyleShareIM;
- (BOOL)shouldDisableNextAction;
- (id)configPublishButtonTitle;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (BOOL)enabled;
- (void)dealloc;
- (void)addSubscriber:(id)a0;
- (id)nextButton;
- (id)shareButton;
- (id)allItemTypes;
- (id)allButtons;

@end

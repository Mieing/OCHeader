@class AWEBubble, AWENewPublishTableCell, DUXPopover, NSString;
@protocol AWEPublishPrivateTableCellProtocol;

@interface AWEPostPagePrivacyElement : AWEPostPageCellElement <AWEPostPageBubbleDelegate, AWEPublishPrivacySettingSubscriber>

@property (retain, nonatomic) AWENewPublishTableCell<AWEPublishPrivateTableCellProtocol> *privateTableViewCell;
@property (retain, nonatomic) AWEBubble *publishToNearbyPrivacyBubble;
@property (retain, nonatomic) DUXPopover *publishToNearbyPrivacyPopover;
@property (nonatomic) long long clickSignal;
@property (nonatomic) BOOL alreadyShowCameraCalendarToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (Class)featureConfigClass:(id)a0;
+ (id)type;

- (id)publishViewModel;
- (void)showBubble;
- (id)liveModel;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatus;
- (void)setupCell:(id)a0;
- (id)slidesService;
- (id)bubbleIdentifier;
- (BOOL)bubbleShouldShow;
- (id)requiresFailureBubbleIdentifiers;
- (BOOL)isEnabledForXiguaAtlasWhenReedit;
- (void)hiddenPublishToNearbyPrivacyBubble;
- (void)p_privacyDidChangeWithInfo:(id)a0;
- (void)p_updatePrivateCellDetail;
- (void)setupUIWithPrivacy;
- (void)presentPublishPrivacyHalfScreen;
- (id)privatePermissionTitle;
- (BOOL)enableHighlightForPrivacy;
- (id)privacyDisplayImage;
- (id)lastChoicePrivacyStringWithLastPublishParamsModel:(id)a0;
- (void)updateLastChoiceButtonTitleIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)service;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)cleanUp;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)cell;
- (id)bubble;
- (id)paymentService;
- (void)didSelect;

@end

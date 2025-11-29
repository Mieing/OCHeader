@class NSString, AWEVideoPublishFooterViewController;
@protocol AWEPostPageElementCenter;

@interface AWEPostPageFooterElement : AWEPostPageElement <AWEVideoPublishFooterDelegate>

@property (retain, nonatomic) AWEVideoPublishFooterViewController *footerController;
@property (weak, nonatomic) id<AWEPostPageElementCenter> elementCenter;
@property (nonatomic) BOOL isPublishRightNavi;
@property (nonatomic) BOOL isVideoPreviewPagePublish;
@property (nonatomic) BOOL isShowKeyboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (Class)featureConfigClass:(id)a0;
+ (id)type;

- (id)publishViewModel;
- (id)poi;
- (void)addNotifications;
- (id)naviFeature;
- (id)navigationBarService;
- (void)bindServices:(id)a0;
- (void)updatePublishButton;
- (id)featureConfigService;
- (void)subscribeServices;
- (void)addAccessibilityElements;
- (BOOL)syncToToutiaoItemIsOn;
- (void)trackLegalAffairsToastShow;
- (id)footerService;
- (id)reeditLoading;
- (void)didPublish:(id)a0;
- (void)previewPublishNotification:(id)a0;
- (void)previewPublishNewFriendsStoryNotification:(id)a0;
- (id)videoSyncService;
- (id)slidesCell;
- (id)draftActions:(id)a0;
- (void)didDraft:(id)a0;
- (id)titleResolveHashtags:(id)a0;
- (BOOL)showNearbyPrivacyBubble:(id)a0;
- (id)poiTrackerWithFooterCotroller:(id)a0;
- (id)additionParamsForPublish:(id)a0;
- (void)didConfigCover:(id)a0;
- (void)didClipVideoReeditPublish:(id)a0;
- (void)willPublish:(id)a0;
- (id)mainPostService;
- (id /* block */)commonDraftAction;
- (void).cxx_destruct;
- (id)contentView;
- (id)privacy;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)appDidBecomeActive;

@end

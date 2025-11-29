@class AWEIMPhotoPickerToolbarViewV2, NSString, AWEIMChatPanelModel, AWEIMAssetGalleryPickerController, NSMutableArray, AWEIMAssetGalleryPickerCustomConfig;

@interface AWEIMMessageListGalleryEntryComponent : AWEIMComponentBase <AWEIMMessageListPlusPanelRegistry, AWEIMMessageListSendAssetInterface, AWEIMPickerViewControllerDataSource, AWEIMPickerlViewControllerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, AWEIMPhotoPickerToolbarDelegate, AWEConversationFormatEnterActions>

@property (retain, nonatomic) AWEIMChatPanelModel *plusPanelItem;
@property (retain, nonatomic) AWEIMAssetGalleryPickerController *galleryPickerController;
@property (retain, nonatomic) AWEIMAssetGalleryPickerCustomConfig *pickerCustomConfig;
@property (retain, nonatomic) NSMutableArray *preTranscodeVideoIDList;
@property (retain, nonatomic) AWEIMPhotoPickerToolbarViewV2 *toolbarViewV3InPicker;
@property (retain, nonatomic) AWEIMPhotoPickerToolbarViewV2 *toolbarViewV3InPreview;
@property (nonatomic) BOOL disableSendVideo;
@property (nonatomic) BOOL disableSendWatchOnce;
@property (nonatomic) BOOL supportExchangeImage;
@property (nonatomic) BOOL sendAsNormal;
@property (nonatomic) BOOL sendAsWatchOnce;
@property (nonatomic) BOOL sendAsExchange;
@property (nonatomic) double beginSendTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)didUpdateFormatRoom:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)canShowInPlusPanelWithContext:(id)a0;
- (id)plusPanelItemModel;
- (BOOL)canShowDecidedBySettingsWithContext:(id)a0;
- (void)didSendAssets:(id)a0 withExchangePublishType:(unsigned long long)a1;
- (void)p_requestAuthorizationComplete:(id /* block */)a0;
- (void)finishSelecting;
- (id)picker:(id)a0 bottomToolViewWithConfig:(id)a1;
- (double)picker:(id)a0 bottomToolHeightWithConfig:(id)a1;
- (id)preview:(id)a0 bottomToolViewWithConfig:(id)a1;
- (double)preview:(id)a0 bottomToolHeightWithConfig:(id)a1;
- (void)picker:(id)a0 allAssetLoadComplete:(id)a1;
- (void)picker:(id)a0 singleAssetLoadComplete:(id)a1;
- (void)picker:(id)a0 didOperateAsset:(id)a1 selected:(BOOL)a2 totalCount:(long long)a3;
- (void)picker:(id)a0 receiveEditResultWithPath:(id)a1 userInfo:(id)a2 associatedAsset:(id)a3 disableVideo:(BOOL)a4;
- (void)picker:(id)a0 selectOrigin:(BOOL)a1;
- (void)dissmissEditPageWithSelectedCount:(long long)a0;
- (void)pickerDidCancelPickAsset:(id)a0;
- (void)partOfselectAssetLoadResourceFaild:(id)a0;
- (void)onPickerToolbar:(id)a0 didTappedWithActionType:(unsigned long long)a1;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)sendAssets:(id)a0 isSendWatchOnce:(BOOL)a1;
- (void)handleVideoRecordFinishedNty:(id)a0;
- (void)handlePhotoRecordFinishedNty:(id)a0;
- (void)previewButtonPressed:(id)a0 animated:(BOOL)a1;
- (void)sendButtonInPickerPressed:(id)a0;
- (void)sendButtonInPreviewPressed:(id)a0;
- (void)p_didSendAssets:(id)a0 isSendWatchOnce:(BOOL)a1;
- (void)p_didSendAssets:(id)a0;
- (void)trackSendBtnClickedWithResults:(id)a0;
- (void)p_resetPickerState;
- (void)p_createUI;
- (void)p_presentPhotoGallery;
- (void)openPicker;
- (void)p_startImageUploadPreHeat;
- (id)__tryAddAIExtForNotFormatWithParams:(id)a0;
- (id)p_filterExchangeMessageInvalidAssets:(id)a0 exchangeImageDataMap:(id)a1 exchangeImageSizeMap:(id)a2;
- (id)createToolbarExchangeImageWithSceneType:(unsigned long long)a0;
- (void)watchOnceSendButtonInPickerPressed:(id)a0;
- (void)watchOnceSendButtonInPreviewPressed:(id)a0;
- (void)exchangeImageButtonInPickerPressed:(id)a0;
- (void)exchangeImageButtonInPreviewPressed:(id)a0;
- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)dealloc;
- (double)toolbarHeight;
- (void)editButtonPressed:(id)a0;

@end

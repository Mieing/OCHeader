@class ACCEditTagStickerHandler, NSString, UIView, ACCEditTagsPickerViewController;
@protocol ACCEditViewContainer, ACCImageAlbumTagsFeatureServiceProtocol, ACCCTRServiceProtocol;

@interface ACCImagAlbumEditTagsComponent : ACCFeatureComponent <ACCPanelViewDelegate, ACCEditTagsPickerViewControllerDelegate, ACCEditTagDataProvider, ACCFeatureComponent>

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCImageAlbumTagsFeatureServiceProtocol> featureService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (retain, nonatomic) ACCEditTagsPickerViewController *tagsPickerViewController;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) ACCEditTagStickerHandler *tagHandler;
@property (copy, nonatomic) NSString *currentFrameUri;
@property (copy, nonatomic) NSString *previousImageItemIdentify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isMounted) BOOL mounted;

- (void)panelViewController:(id)a0 didShowPanelView:(id)a1;
- (void)panelViewController:(id)a0 willShowPanelView:(id)a1;
- (void)panelViewController:(id)a0 willDismissPanelView:(id)a1;
- (void)panelViewController:(id)a0 didDismissPanelView:(id)a1;
- (BOOL)isUserPreuploadEnabled;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)baseTrackerParams;
- (void)dismissPanel;
- (void)bindServices:(id)a0;
- (BOOL)isClipVideoReedit;
- (id)currentImageItemModel;
- (void)tagsPickerDidTapTopBar:(id)a0;
- (void)tagsPicker:(id)a0 didPanWithRatio:(double)a1 finished:(BOOL)a2 dismiss:(BOOL)a3;
- (void)tagsPicker:(id)a0 didSelectTag:(id)a1 originalTag:(id)a2;
- (long long)resourceLocation;
- (BOOL)isSequenceSlides;
- (id)tagBarItem;
- (void)showPanelWithSelectedTag:(id)a0;
- (void)tagsButtonClicked;
- (unsigned long long)totalTagCount;
- (void)p_recommendTagsForUsers;
- (void)fetchRecommendTagsUploadImageUriWithImageUri:(id)a0;
- (void)uploadCurrentImageToCloudWithCurrentImageIdentity:(id)a0;
- (void).cxx_destruct;

@end

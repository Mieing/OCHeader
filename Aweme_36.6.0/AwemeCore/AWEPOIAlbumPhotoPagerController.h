@class UIView, AWEPOIAlbumPageViewWithSingleItem, NSString, AWEPOIAlbumLabels, AWEPOIAlbumPhotoParamModel, AWEPOIAlbumDataProcessor, AWEPOIPreviewContainerManager, NSMutableSet, DUXButton, DUXLoadingParticleView, AWEPOIAlbumStatusErrorVC, UIViewController;
@protocol AWEPOIAlbumPhotoPagerControllerDelegate, IESLLFusePOIDetailNGPageContextProtocol;

@interface AWEPOIAlbumPhotoPagerController : UIViewController <AWEPOIAlbumLabelsViewDelegate>

@property (weak, nonatomic) id<IESLLFusePOIDetailNGPageContextProtocol> context;
@property (retain, nonatomic) AWEPOIAlbumPhotoParamModel *paramModel;
@property (retain, nonatomic) AWEPOIAlbumDataProcessor *albumDataProcessor;
@property (retain, nonatomic) NSMutableSet *hasLoadPageIndexes;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) AWEPOIAlbumLabels *albumLabels;
@property (retain, nonatomic) AWEPOIAlbumPageViewWithSingleItem *albumPage;
@property (retain, nonatomic) DUXButton *uploadButton;
@property (retain, nonatomic) UIView *shootRewardView;
@property (retain, nonatomic) AWEPOIPreviewContainerManager *bottomBarManager;
@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) AWEPOIAlbumStatusErrorVC *errorVC;
@property (weak, nonatomic) UIViewController<AWEPOIAlbumPhotoPagerControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPOIUploadAwardAdapterClass;

- (void)buildLoadingView;
- (void)resetLoadingView;
- (void)setupBottomContainer;
- (void)hiddenErrorView;
- (BOOL)hideAlbumUploadButton;
- (void)didSelectLabelWithModel:(id)a0;
- (id)initWithContext:(id)a0 paramModel:(id)a1;
- (void)loadFirstPage;
- (long long)anchorTabIndex;
- (void)setupAlbumPageWithAnchorTabIndex:(long long)a0;
- (void)setupAlbumLabelsWithAnchorTabIndex:(long long)a0;
- (void)setupUploadButton;
- (void)didTapPhotoUploadButton;
- (id)aAWEPOIUploadAwardAdapter;
- (void)albumPageItemSwitch:(long long)a0;
- (void)changeLabelPageToSelectedStatus;
- (void)changeLabelPageToUnselectedStatus;
- (void)changeBottomToSelectedStatus;
- (void)changeBottomToUnselectedStatus;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)showErrorView;

@end

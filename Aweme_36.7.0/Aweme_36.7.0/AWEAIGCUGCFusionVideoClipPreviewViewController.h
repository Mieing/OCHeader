@class NSString, AWEVideoPublishViewModel, AWEAssetsCropAndClipManager, UIImageView, AWEAIGCUGCFusionVideoEditExportResult, AWEAIGCUGCFusionVideoReferenceTypeViewController, AWEAIGCUGCFusionVideoClipConfig, DUXButton, UIViewController, UILabel;
@protocol AWEDPlayerProtocol;

@interface AWEAIGCUGCFusionVideoClipPreviewViewController : UIViewController <AWEDPlayerDelegate, AWEAIGCUGCFusionVideoReferenceTypePanelDelegate>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) UIViewController<AWEDPlayerProtocol> *playerController;
@property (retain, nonatomic) AWEAIGCUGCFusionVideoClipConfig *inputVideoClipConfig;
@property (retain, nonatomic) DUXButton *editButton;
@property (retain, nonatomic) DUXButton *replaceButton;
@property (retain, nonatomic) DUXButton *completeButton;
@property (retain, nonatomic) AWEAIGCUGCFusionVideoReferenceTypeViewController *referenceTypeController;
@property (nonatomic) BOOL clipTipsHandled;
@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *emptyContentLabel;
@property (retain, nonatomic) AWEAssetsCropAndClipManager *clipPageHolder;
@property (retain, nonatomic) AWEAIGCUGCFusionVideoEditExportResult *exportResult;
@property (copy, nonatomic) id /* block */ imageCompletionBlock;
@property (copy, nonatomic) id /* block */ videoCompletionBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)editButtonClicked;
- (void)setupNaviBar;
- (id)initWithVideoClipConfig:(id)a0 publishViewModel:(id)a1;
- (void)initPlayerWithInputConfig;
- (void)setupPlayerUI;
- (void)setupPlayerContent;
- (void)aweNaviBarDidClickCloseButton;
- (void)trackReferenceChoosePageShow;
- (void)showEditTipsBubbleIfNeeded;
- (void)trackReferenceConfirmShow;
- (void)replaceButtonClicked;
- (void)completeButtonClicked;
- (void)didConfirmWithReferenceTypeModel:(id)a0;
- (void)referencePanelReloadedConfirmable:(BOOL)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end

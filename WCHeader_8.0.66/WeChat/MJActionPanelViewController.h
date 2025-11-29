@class NSString, MJActionPanelViewModel, MJActionPanelMainMenuView, MJSegmentInspectorView, MJSegmentInspectorViewModel;
@protocol MJActionPanelViewControllerDelegate;

@interface MJActionPanelViewController : UIViewController <MJActionPanelMainMenuViewDelegate>

@property (retain, nonatomic) MJActionPanelMainMenuView *mainMenuView;
@property (weak, nonatomic) MJSegmentInspectorViewModel *bindedSegmentInspectorVM;
@property (readonly, nonatomic) MJActionPanelViewModel *viewModel;
@property (readonly, nonatomic) MJSegmentInspectorView *inspectorView;
@property (weak, nonatomic) id<MJActionPanelViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)setupViews;
- (void)updateMainMenuWithSegmentVM:(id)a0;
- (void)updateMainMenuWithPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)reloadMainMenuWithPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (unsigned long long)actionPanelConfigurationForCurrentSegmnt;
- (void)mainMenuView:(id)a0 didSelectItem:(id)a1;
- (void)didSelectCropMenuItem;
- (void)didSelectFilterMenuItem;
- (id)createFilterInspectorView;
- (id)createVolumeInspectorView;
- (void)updateInspectorView:(id)a0;
- (void)didSelectPictureMenuItem;
- (void)didSelectSpeedMenuItem;
- (void)didSelectVolumeMenuItem;
- (void)bindInspectorViewModel:(id)a0;
- (BOOL)willLeaveClipEditing;
- (void)handleInspectorValueDidChange:(id)a0;
- (void)showInspectorView:(id)a0;
- (void)dismissInspectorView:(id)a0 isFinished:(BOOL)a1;
- (void)didSelectCanvasMenuItem;
- (void)didSelectDigiZoomMenuItem;
- (void)didSelectBatchClippingMenuItem;
- (void)didSelectDeleteMenuItem;
- (void)didSelectReorderMenuItem;
- (void)didSelectContentRangeMenuItem;
- (void)didSelectSplitMenuItem;
- (void)didSelectOrientationMenuItem;
- (void)didSelectEditCaptionTextMenuItem;
- (void)didSelectEditCaptionStyleMenuItem;
- (void)didSelectVoiceChangeMenuItem;
- (void)didSelectVoiceReadMenuItem;
- (void)didSelectSpeechRecognitionMenuItem;
- (void)showTransitionInspector:(id)a0;
- (void)showVoiceChagneInspector:(id)a0;
- (void)showVoiceChagneInspector:(id)a0 withExtraOptions:(unsigned long long)a1;
- (void)setupVoiceChangeInspectorWithExtraOptions:(unsigned long long)a0;
- (void).cxx_destruct;

@end

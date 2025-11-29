@class AWEComposerBeautyViewModel, ACCBeautyPanelViewModel, AWEComposerBeautyViewController, AWEComposerBeautyEffectViewModel, AWEVideoPublishViewModel;
@protocol ACCPanelViewController, ACCBeautyBuildInDataSource, AWEComposerBeautyDelegate, ACCBeautyComponentConfigProtocol, ACCPanelViewProtocol, ACCBeautyDataService;

@interface ACCBeautyPanel : NSObject

@property (retain, nonatomic) ACCBeautyPanelViewModel *viewModel;
@property (retain, nonatomic) AWEComposerBeautyViewController *composerBeautyViewController;
@property (retain, nonatomic) AWEComposerBeautyViewModel *composerVM;
@property (retain, nonatomic) AWEComposerBeautyEffectViewModel *effectViewModel;
@property (retain, nonatomic) id<ACCBeautyComponentConfigProtocol> config;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<AWEComposerBeautyDelegate> composerBeautyDelegate;
@property (copy, nonatomic) id /* block */ fetchComposerDataBlock;
@property (retain, nonatomic) id<ACCPanelViewController> panelViewController;
@property (retain, nonatomic) id<ACCPanelViewProtocol> beautyPanelView;
@property (retain, nonatomic) id<ACCBeautyDataService> dataService;
@property (retain, nonatomic) id<ACCBeautyBuildInDataSource> composerVMDataSource;

- (void)showPanel;
- (void)reloadCurrentPanel;
- (void)updateCurrentComposerCategory;
- (id)initWithViewModel:(id)a0 effectViewModel:(id)a1 publishModel:(id)a2;
- (void)p_reloadComposerBeautyPanel;
- (void)__handleDownloadStatusChanged:(id)a0 status:(long long)a1;
- (unsigned long long)p_cellIconStyle;
- (BOOL)p_useBeautySwitch;
- (void).cxx_destruct;
- (void)clearSelection;
- (void)dealloc;

@end

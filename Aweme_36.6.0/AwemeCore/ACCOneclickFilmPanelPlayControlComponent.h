@protocol ACCSecondaryPageLayoutManager, ACCSequencePlayControlServiceProtocol;

@interface ACCOneclickFilmPanelPlayControlComponent : ACCOCFPlayControlComponent

@property (weak, nonatomic) id<ACCSecondaryPageLayoutManager> secondaryPageLayoutManager;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;

- (void)componentDidAppear;
- (void)componentDidMount;
- (void)setupPlayControlView;
- (BOOL)isMultiToOneTemplate;
- (void)updatePreviewWithWorkspaceStatus:(BOOL)a0;
- (void)updatePreviewPlayStatusWithWorkspaceStatus:(BOOL)a0;
- (id)previewView;
- (void).cxx_destruct;

@end

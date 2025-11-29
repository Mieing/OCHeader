@protocol ACCOneClickFilmPanelTrackerService, ACCEditOneClickFilmPanelServiceProtocol, ACCEditorOneClickFilmingExitServiceProtocol, ACCEditorOneClickFilmService;

@interface ACCOneClickFilmPanelNavComponent : ACCGenericEffectPanelNavComponent

@property (weak, nonatomic) id<ACCEditOneClickFilmPanelServiceProtocol> oneClickFilmPanelService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmService> oneClickFilmService;
@property (weak, nonatomic) id<ACCOneClickFilmPanelTrackerService> oneClickFilmTrackerService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingExitServiceProtocol> oneClickFilmExitService;
@property (nonatomic) BOOL isEnterSegmentEdit;

- (id)trackerService;
- (void)componentDidMount;
- (double)subViewHeight;
- (id)panelService;
- (void).cxx_destruct;

@end

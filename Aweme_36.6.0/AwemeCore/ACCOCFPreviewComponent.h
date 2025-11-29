@class NSString, UIView;
@protocol ACCEditServiceProtocol, ACCEditOneClickFilmApplyServiceProtocol, ACCSequenceEditServiceProtocol, ACCOneClickFilmPlayerService, ACCEditOneClickFilmTrackService, ACCOCFViewContainerProtocol, ACCEditorOneClickFilmService, ACCEditorOneClickFilmListFetchService, ACCEditorOneClickFilmingExitServiceProtocol, ACCVideoEditBottomControlService;

@interface ACCOCFPreviewComponent : ACCFeatureComponent <ACCVideoEditBottomControlSubscriber, ACCEditPreviewMessageProtocol>

@property (retain, nonatomic) id<ACCOneClickFilmPlayerService> previewPlayerService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmService> oneClickFilmService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmListFetchService> oneClickFilmFetchListService;
@property (retain, nonatomic) UIView *previewContainerView;
@property (weak, nonatomic) id<ACCOCFViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCEditOneClickFilmTrackService> trackService;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingExitServiceProtocol> exitService;
@property (weak, nonatomic) id<ACCEditOneClickFilmApplyServiceProtocol> applyService;
@property (weak, nonatomic) id<ACCVideoEditBottomControlService> bottomControlService;
@property (nonatomic) BOOL hasSetupPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)registerNotification;
- (void)playerPlayToEnd;
- (void)bindServices:(id)a0;
- (void)enterBackgroundNotification;
- (void)enterForegroundNotification;
- (void)setupForDidAppear;
- (void)editBottomPanelDidTap:(id)a0 type:(long long)a1;
- (void)editBottomPanelBeforeDidTap:(id)a0 type:(long long)a1;
- (void)setupContainerView;
- (void).cxx_destruct;

@end

@class NSString;
@protocol ACCSequencePlayControlServiceProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCEditPublishSettingsServiceProtocol, ACCEditServiceProtocol, ACCRichTextEditorServiceProtocol, ACCVideoEditFlowControlService, ACCRealLivePhotoService, ACCCTRServiceProtocol, ACCVideoEditBottomControlService;

@interface AWEEditPublishSettingsComponent : ACCFeatureComponent <ACCVideoEditBottomControlSubscriber, ACCEditSessionLifeCircleEvent, ACCSequenceEditServicePlayerSubscriber, ACCFeatureComponentReloadableProtocol, ACCSequencePlayControlServiceSubscriber, ACCRealLivePhotoServiceSubscriber>

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControlService;
@property (weak, nonatomic) id<ACCVideoEditBottomControlService> bottomControlService;
@property (retain, nonatomic) id<ACCEditPublishSettingsServiceProtocol> publishSettingsService;
@property (retain, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<ACCRichTextEditorServiceProtocol> richTextEditorService;
@property (weak, nonatomic) id<ACCRealLivePhotoService> realLivePhotoService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (nonatomic) BOOL isMixedSlidesOfLast;
@property (nonatomic) BOOL didAppearOnce;
@property (nonatomic) BOOL isShowingSettingPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)livePhotoDidChangeMode:(unsigned long long)a0;
- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (BOOL)sequencePlayControlService:(id)a0 shouldForbidPauseWhenDisappear:(id)a1;
- (void)sensorialRenderWithEditService:(id)a0;
- (id)barItem;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)componentDidReload;
- (void)componentWillReload;
- (void)editBottomPanelDidTap:(id)a0 type:(long long)a1;
- (BOOL)shouldConfigSettingsBarItem;
- (void)presentPrivacyOptions;
- (void)observerLivePhotoMode;
- (void)updateSceneInfo;
- (void)configPrivacy;
- (void)unregisterAdvanceSettingDataControllerIfNeeded:(id)a0;
- (void).cxx_destruct;

@end

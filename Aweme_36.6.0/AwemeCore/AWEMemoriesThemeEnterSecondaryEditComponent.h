@class NSString;
@protocol ACCEditViewContainer, ACCEditServiceProtocol, ACCSequencePlayControlServiceProtocol;

@interface AWEMemoriesThemeEnterSecondaryEditComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCSequencePlayControlServiceSubscriber>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;
@property (nonatomic) BOOL isReadyToSecondaryPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (BOOL)sequencePlayControlService:(id)a0 shouldForbidPauseWhenDisappear:(id)a1;
- (BOOL)sequencePlayControlService:(id)a0 shouldForbidPlayWhenAppear:(id)a1;
- (void)firstRenderWithEditService:(id)a0;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)enterInTodayThemeVideoSecondaryPage;
- (void).cxx_destruct;

@end

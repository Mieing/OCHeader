@class UIView, NSString, UILabel, AWECameraFilterConfiguration, UIViewController;
@protocol ACCCTRServiceProtocol, ACCFullScreenPanelViewProtocol, AWETabFilterViewControllerProtocol, ACCEditViewContainer, ACCImageAlbumFilterFeatureServiceProtocol, ACCEditServiceProtocol;

@interface ACCImageEditFilterComponent : ACCFeatureComponent <AWERecordFilterVCDelegate, ACCPanelViewDelegate, ACCEditSessionLifeCircleEvent, ACCDraftResourceRecoverProtocol>

@property (retain, nonatomic) UIViewController<AWETabFilterViewControllerProtocol, ACCFullScreenPanelViewProtocol> *tabFilterController;
@property (retain, nonatomic) AWECameraFilterConfiguration *cameraFilterConfiguration;
@property (retain, nonatomic) UILabel *filterNameLabel;
@property (retain, nonatomic) UIView *bgMaskView;
@property (nonatomic) BOOL filterPanelIsShowing;
@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCImageAlbumFilterFeatureServiceProtocol> featureService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)draftResourceIDsToDownloadForPublishViewModel:(id)a0;
+ (void)updateWithDownloadedEffects:(id)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;

- (void)firstRenderWithEditService:(id)a0;
- (void)panelViewController:(id)a0 didShowPanelView:(id)a1;
- (void)panelViewController:(id)a0 willShowPanelView:(id)a1;
- (void)panelViewController:(id)a0 willDismissPanelView:(id)a1;
- (void)panelViewController:(id)a0 didDismissPanelView:(id)a1;
- (float)filterIndensity:(id)a0;
- (id)currentFilterHelper;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)applyFilter:(id)a0;
- (void)bindServices:(id)a0;
- (void)onSliderIndensityChangedForFilter:(id)a0 indensity:(float)a1;
- (BOOL)enableFilterIndensity;
- (void)onUserSliderRatioValueChanged:(double)a0;
- (id)filterBarItem;
- (void)showFilterNamaLabelWithFilterName:(id)a0 categoryName:(id)a1;
- (void)p_openFilterPanel;
- (void)filterClicked;
- (void)p_updateFilterPanel;
- (void)trackFilterEvent;
- (void).cxx_destruct;
- (id)containerViewController;

@end

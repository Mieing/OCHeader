@class NSString;
@protocol ACCEditViewContainer, ACCEditServiceProtocol, ACCCTRServiceProtocol;

@interface ACCImageEditHDRComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCDraftResourceRecoverProtocol>

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (nonatomic) BOOL isLensHDREvnEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelsToDownloadForPublishViewModel:(id)a0;

- (void)firstRenderWithEditService:(id)a0;
- (void)barItemContainerDidLoad;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (id)p_barItem;
- (void)p_setHDRNetEnabled:(BOOL)a0;
- (void)p_trackHDRNet:(BOOL)a0;
- (id)p_videoEnhanceButton;
- (void)p_updateHDRBarItemStatus;
- (void)p_onHDRBarButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)containerViewController;

@end

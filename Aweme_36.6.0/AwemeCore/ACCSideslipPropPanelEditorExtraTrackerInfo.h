@class NSString, AWEVideoPublishViewModel;
@protocol ACCEditSpecialEffectServiceProtocol, ACCSideslipPropPanelService, IESServiceProvider, ACCSideslipPropInternalService, ACCSideslipPropService, ACCSideslipPropPanelFocusEditorHandleServiceProtocol;

@interface ACCSideslipPropPanelEditorExtraTrackerInfo : NSObject <ACCSideslipPropPanelExtraTrackerInfoProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropInternalService> sideslipPropInternalService;
@property (weak, nonatomic) id<ACCSideslipPropPanelFocusEditorHandleServiceProtocol> sideslipPropPanelFocusHandleService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (nonatomic) BOOL isFirstOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)injectExtraTrackerInfo:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (id)p_originContentType;
- (id)commonExtraInfoWithOriginInfo:(id)a0;
- (BOOL)checkIsShowChosen;
- (void)trackPanelShowWithEnterMethod:(id)a0;
- (void)trackEffectPanelShowWithEnterMethod:(id)a0;
- (void)trackGenericTemplatePanelShowWithEnterMethod:(id)a0;
- (void)configEffectPanelTracker:(id)a0 enterMethon:(id)a1;
- (void)configGenericTemplatePanelTracker:(id)a0 enterMethon:(id)a1;
- (void).cxx_destruct;

@end

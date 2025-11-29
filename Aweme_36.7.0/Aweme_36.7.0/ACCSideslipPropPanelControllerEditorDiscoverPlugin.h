@class UIButton, NSString, AWEVideoPublishViewModel;
@protocol ACCSideslipPropPanelUIConfigService, ACCSideslipPropPanelControllerProtocol, ACCEditGenericEffectPanelService, ACCSideslipPropPanelTrackerService;

@interface ACCSideslipPropPanelControllerEditorDiscoverPlugin : NSObject <ACCSideslipPropPickCollectionViewSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (weak, nonatomic) id<ACCSideslipPropPanelUIConfigService> uiConfigService;
@property (weak, nonatomic) id<ACCEditGenericEffectPanelService> panelService;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) BOOL isFirstShowButton;
@property (retain, nonatomic) UIButton *discoverButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sideslipPropPickCollectionView:(id)a0 willShowFocusIndex:(long long)a1 sencondaryIndexes:(id)a2 withReason:(unsigned long long)a3;
- (void)controllerViewDidLoad:(id)a0;
- (void)controller:(id)a0 willShowOnView:(id)a1;
- (void)p_setupBindings;
- (void)p_trackSideslipPropPanelDiscoverButtonShow;
- (void)animateFadeOut;
- (void)onDiscoverButtonClick:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)animateFadeIn;

@end

@class ACCSideslipPropPickIndicatorView, NSString, UIView;
@protocol ACCSideslipPropPanelListDataProvider, ACCSideslipPropPanelService, ACCSideslipPropPanelControllerProtocol, ACCSideslipPropPanelUIConfigService, ACCSideslipPropPanelFocusStatusService, ACCSideslipPropViewContainerProtocol;

@interface ACCSideslipPropPanelControllerIndicatorPlugin : NSObject <ACCSideslipPropPickCollectionViewSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCSideslipPropPanelFocusStatusService> sideslipFocusStatusService;
@property (weak, nonatomic) id<ACCSideslipPropPanelListDataProvider> listDataProvider;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelUIConfigService> uiConfigService;
@property (retain, nonatomic) ACCSideslipPropPickIndicatorView *indicatorView;
@property (retain, nonatomic) UIView *bubbleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sideslipPropPickCollectionView:(id)a0 shouldShowExtendViewWithDirection:(unsigned long long)a1 progress:(double)a2;
- (void)controllerViewDidLoad:(id)a0;
- (void)handleFocusDownloadFailed;
- (void)p_setupUI;
- (void).cxx_destruct;

@end

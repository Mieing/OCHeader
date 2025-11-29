@class UIButton, NSString;
@protocol ACCSideslipPropPanelService, ACCSideslipPropPanelControllerProtocol, ACCSideslipPropPanelFavoriteService, ACCSideslipPropPanelUIConfigService;

@interface ACCSideslipPropPanelControllerFavoritePlugin : NSObject <ACCStickerPickerServiceSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelFavoriteService> sideslipFavoriteService;
@property (weak, nonatomic) id<ACCSideslipPropPanelUIConfigService> uiConfigService;
@property (retain, nonatomic) UIButton *favoriteButton;
@property (nonatomic) BOOL favoriteButtonUserInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controllerViewDidLoad:(id)a0;
- (void)setFavoriteButtonEnabled:(BOOL)a0;
- (void)onFavoriteButtonClick:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;

@end

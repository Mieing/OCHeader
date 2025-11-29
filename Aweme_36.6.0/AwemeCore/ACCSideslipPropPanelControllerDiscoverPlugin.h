@class UIButton, NSString;
@protocol ACCSideslipPropPanelUIConfigService, ACCPropPickerService, ACCSideslipPropPanelControllerProtocol, ACCSideslipPropPanelTrackerService;

@interface ACCSideslipPropPanelControllerDiscoverPlugin : NSObject <AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (weak, nonatomic) id<ACCPropPickerService> propPickerService;
@property (weak, nonatomic) id<ACCSideslipPropPanelUIConfigService> uiConfigService;
@property (retain, nonatomic) UIButton *discoverButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

@class NSString;
@protocol ACCSideslipPropPanelService, ACCSideslipPropPanelEditorEventDispatchServiceProtocol, ACCSideslipPropPanelControllerProtocol;

@interface ACCSideslipPropPanelControllerEditorNotifyEPPlugin : NSObject <ACCSideslipPropPanelEditorEventDispatchServiceSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelEditorEventDispatchServiceProtocol> panelEditorEventDispatchService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controllerViewDidLoad:(id)a0;
- (void)sideslipPropPanelEditorEventWithDidApplyEffect;
- (void).cxx_destruct;

@end

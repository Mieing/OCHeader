@class NSString, CAGradientLayer;
@protocol ACCSideslipPropViewContainerProtocol, ACCSideslipPropPanelControllerProtocol;

@interface ACCSideslipPropPanelControllerMaskPlugin : NSObject <AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL reduceMaskLayerWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controllerViewDidLoad:(id)a0;
- (void)p_resetGradientLayerFrame;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end

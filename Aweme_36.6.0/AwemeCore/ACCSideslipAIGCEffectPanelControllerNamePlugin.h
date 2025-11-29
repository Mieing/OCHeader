@class UIButton, UIImage, NSString;
@protocol ACCSideslipPropPanelService, ACCSideslipPropService, ACCSideslipPropPanelControllerProtocol, ACCSideslipPropViewContainerProtocol, ACCSideslipAIGCPanelListDataProviderProtocol;

@interface ACCSideslipAIGCEffectPanelControllerNamePlugin : NSObject <ACCSideslipPropPickCollectionViewSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipAIGCPanelListDataProviderProtocol> aigcListDataProvider;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (retain, nonatomic) UIButton *currentPropNameButton;
@property (retain, nonatomic) UIImage *buttonImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controllerViewDidLoad:(id)a0;
- (void)controllerViewLayout:(id)a0;
- (void)p_bindFocusCellModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;

@end

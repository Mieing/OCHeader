@class NSString, DUXPopover, UIView;
@protocol ACCSideslipPropPanelService, ACCSideslipPropService, ACCSideslipPropPanelControllerProtocol, ACCSideslipPropViewContainerProtocol, ACCSideslipAIGCPanelListDataProviderProtocol;

@interface ACCSideSlipAIGCEffectPanelBubblePlugin : NSObject <ACCSideslipPropPickCollectionViewSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipAIGCPanelListDataProviderProtocol> aigcListDataProvider;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) DUXPopover *bubbleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindService;
- (BOOL)isEditPage;
- (void)controllerViewDidLoad:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end

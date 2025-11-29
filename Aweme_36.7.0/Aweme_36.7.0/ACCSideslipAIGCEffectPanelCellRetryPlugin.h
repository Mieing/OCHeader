@class NSString, UIView;
@protocol ACCSideslipPropPanelService, ACCSideslipPropService, ACCSideslipPropPanelControllerProtocol, ACCSideslipPropViewContainerProtocol, ACCSideslipAIGCPanelListDataProviderProtocol;

@interface ACCSideslipAIGCEffectPanelCellRetryPlugin : NSObject <ACCSideslipPropPickCollectionViewSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipAIGCPanelListDataProviderProtocol> aigcListDataProvider;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (retain, nonatomic) UIView *retryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindService;
- (void)sideslipPropPickCollectionView:(id)a0 willBeginScrollWithReason:(unsigned long long)a1 scrollDirection:(unsigned long long)a2;
- (void)sideslipPropPickCollectionView:(id)a0 didEndScrollWithReason:(unsigned long long)a1;
- (void)controllerViewDidLoad:(id)a0;
- (void)updateRetryView:(BOOL)a0 index:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end

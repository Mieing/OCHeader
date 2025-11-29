@class UILabel, NSString;
@protocol ACCSideslipPropPanelService, ACCSideslipPropService, ACCSideslipPropPanelControllerProtocol, ACCRecorderSideslipViewContainerProtocol, ACCSideslipPropViewContainerProtocol;

@interface ACCSideslipPropPanelControllerNamePlugin : NSObject <ACCSideslipPropPickCollectionViewSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCRecorderSideslipViewContainerProtocol> recorderSideslipViewContainer;
@property (retain, nonatomic) UILabel *currentPropNameLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sideslipPropPickCollectionView:(id)a0 shouldShowExtendViewWithDirection:(unsigned long long)a1 progress:(double)a2;
- (void)controllerViewDidLoad:(id)a0;
- (void)controllerViewLayout:(id)a0;
- (void)p_bindFocusCellModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;

@end

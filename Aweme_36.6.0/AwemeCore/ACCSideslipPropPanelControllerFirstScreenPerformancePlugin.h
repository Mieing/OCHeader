@class NSString;
@protocol ACCSideslipPropPanelService, ACCSideslipPropPanelControllerProtocol, ACCSideslipPropViewContainerProtocol, ACCSideslipPropPanelTrackerService;

@interface ACCSideslipPropPanelControllerFirstScreenPerformancePlugin : NSObject <ACCSideslipPropPickCollectionViewSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (nonatomic) double beginLoadStickerIconTime;
@property (nonatomic) BOOL firstScreenIconsHaveShow;
@property (nonatomic) BOOL hasStartBind;
@property (nonatomic) double effectModelStartBindTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sideslipPropPickCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)sideslipPropPickCollectionViewDidScroll:(id)a0 collectionView:(id)a1 visibleCells:(id)a2;
- (void)controllerViewDidLoad:(id)a0;
- (void)handleVisibleCells:(id)a0;
- (void)didFinishEffectIconShowing;
- (void).cxx_destruct;

@end

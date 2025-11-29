@class NSString;
@protocol ACCSideslipPropService, ACCSideslipPropViewContainerProtocol, ACCSideslipPropPanelControllerProtocol;

@interface ACCSideslipPropPanelControllerLocatePlugin : NSObject <ACCSideslipPropPickCollectionViewSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

@class NSSet, NSString, IESEffectModel, AWECollectionStickerPickerController;
@protocol ACCCameraService, ACCStickerPickerService, AWEStickerPickerControllerProtocol, AWEStickerViewLayoutManagerProtocol, ACCRecordPropService;

@interface AWEStickerPickerControllerCollectionStickerPlugin : NSObject <AWECollectionStickerPickerControllerDelegate, AWEStickerPickerControllerPluginProtocol>

@property (retain, nonatomic) AWECollectionStickerPickerController *collectionStickerPickerController;
@property (weak, nonatomic) id<AWEStickerPickerControllerProtocol> controller;
@property (copy, nonatomic) NSSet *stickerIDSet;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCStickerPickerService> stickerPickerService;
@property (weak, nonatomic) id<AWEStickerViewLayoutManagerProtocol> layoutManager;
@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (retain, nonatomic) IESEffectModel *currentChildSticker;
@property (copy, nonatomic) id /* block */ trackingInfoDictionaryBlock;
@property (copy, nonatomic) id /* block */ didSelectStickerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controllerViewDidLoad:(id)a0;
- (void)controller:(id)a0 willShowOnView:(id)a1;
- (void)controller:(id)a0 didSelectNewSticker:(id)a1 oldSticker:(id)a2;
- (void)collectionStickerPickerController:(id)a0 didSelectSticker:(id)a1;
- (void)collectionStickerPickerController:(id)a0 willSelectSticker:(id)a1 atIndexPath:(id)a2;
- (void)collectionStickerPickerController:(id)a0 willDisplaySticker:(id)a1 atIndexPath:(id)a2;
- (void)showPanelIfNeeded;
- (void)p_showCollectionStickersForSticker:(id)a0 childSticker:(id)a1;
- (void)addCollectionStickerViewAnimated:(BOOL)a0;
- (void)p_resetCollectionStickerPickerController;
- (void)trackClickEventWithController:(id)a0 willSelectSticker:(id)a1 atIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end

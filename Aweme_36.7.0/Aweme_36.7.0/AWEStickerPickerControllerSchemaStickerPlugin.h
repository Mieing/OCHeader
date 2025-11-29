@class NSString;

@interface AWEStickerPickerControllerSchemaStickerPlugin : NSObject <AWEStickerPickerControllerPluginProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controller:(id)a0 didSelectNewSticker:(id)a1 oldSticker:(id)a2;

@end

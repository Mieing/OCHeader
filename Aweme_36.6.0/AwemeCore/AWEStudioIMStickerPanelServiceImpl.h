@class NSString;

@interface AWEStudioIMStickerPanelServiceImpl : HTSService <AWEStudioIMStickerPanelService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)stickerManager;
- (Class)stickerPannelController;
- (Class)stickerPickerController;

@end

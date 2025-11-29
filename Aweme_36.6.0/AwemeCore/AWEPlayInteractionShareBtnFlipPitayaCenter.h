@interface AWEPlayInteractionShareBtnFlipPitayaCenter : NSObject

+ (id)sharedInstance;

- (void)p_registerMessageHandlerWhenReady;
- (void)p_removeMessageHandler;
- (void)p_registerMessageHandler;
- (void)p_pitayaQueryPackageWithBusinessName:(id)a0;
- (void)p_registerMessageHandlerForShareIconFlip;
- (id)init;
- (void)dealloc;

@end

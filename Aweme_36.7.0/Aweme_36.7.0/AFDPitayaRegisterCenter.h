@interface AFDPitayaRegisterCenter : NSObject

+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)p_registerMessageHandlerWhenReady;
- (void)p_removeMessageHandler;
- (void)p_registerMessageHandler;
- (void)p_registerMessageHandlerForInnerPush;
- (void)p_registerMessageHandlerForRecommendEntranceLabel;
- (void)p_registerMessageHandlerForEnterFamiliarTab;
- (void)p_registerMessageHandlerForRedDot;
- (void)p_pitayaQueryPackageWithBusinessName:(id)a0;
- (id)init;
- (void)dealloc;

@end

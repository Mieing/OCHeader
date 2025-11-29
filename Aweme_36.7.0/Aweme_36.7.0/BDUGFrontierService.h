@interface BDUGFrontierService : NSObject

+ (id)sharedInstance;

- (void)onReceiveMessage:(id)a0;
- (void)unUseTTPushManager;
- (BOOL)isConnected;

@end

@interface IESECGlobalBridgeEventSender : NSObject

+ (id)sharedInstance;

- (void)userDidTakeScreenshot:(id)a0;
- (void)addTakeScreenshotObserver;
- (void)removeTakeScreenshotObserver;

@end

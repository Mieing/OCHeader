@interface AWEIMLeagueFIleBridgeManager : NSObject

+ (id)sharedInstance;

- (void)downloadFileWithBridgeModel:(id)a0;
- (id)convertBridgeModelToDownloaderModel:(id)a0;
- (void)openFileViewControllerWithBridgeModel:(id)a0 configModel:(id)a1;

@end

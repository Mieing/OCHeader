@interface APBToygerCheckTask : APBToygerBaseTask

@property (nonatomic) BOOL isAudioPermissionNeed;

- (void)_openUrl;
- (void)checkCameraPermission;
- (void)_addAlertAppearMonitor:(id)a0;
- (void)invokeWithPipeInfo:(id)a0;
- (void)processEvent:(id)a0 withCompletionCallback:(id /* block */)a1;

@end

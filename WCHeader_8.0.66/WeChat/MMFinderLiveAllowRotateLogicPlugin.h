@interface MMFinderLiveAllowRotateLogicPlugin : MMLiveTaskBaseFunctionPlugin

@property (nonatomic) BOOL isAllowRotateInIphone;

- (void)initializeSdkInfoSupportRotate;
- (void)updateAllowRotateWithLiveInfo:(id)a0 liveChannelParams:(id)a1;
- (BOOL)updateAllowRotate:(BOOL)a0;
- (void)onExtFlagExtUpdated;
- (BOOL)extFlagDisableRotate;

@end

@interface AWEDiversionNewUserTask : NSObject

@property BOOL needReport;

- (void)actCommonGenerated;
- (void)reportLaunchIfNeeded;
- (void)reportReactInstall:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)dealloc;

@end

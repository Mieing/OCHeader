@protocol MMPageSheetProvider;

@interface WCCoinInterceptLogic : MMObject

@property (weak, nonatomic) id<MMPageSheetProvider> pageSheetProvider;

- (BOOL)shouldHandleIntercept:(id)a0;
- (void)handleInterceptWin:(id)a0 didClickBlock:(id /* block */)a1;
- (void)handleJumpInfo:(id)a0 didClickBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end

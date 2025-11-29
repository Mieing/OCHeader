@protocol JumpToBizWebviewLogicHelperDelegate;

@interface JumpToBizWebviewLogicHelper : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<JumpToBizWebviewLogicHelperDelegate> delegate;

- (void)dealloc;
- (void)jumpToBizWebview:(id)a0;
- (void)handleJumpToBizWebviewResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end

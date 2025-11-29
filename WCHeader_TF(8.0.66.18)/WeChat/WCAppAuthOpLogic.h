@protocol WCAppAuthOpLogicDelegate;

@interface WCAppAuthOpLogic : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCAppAuthOpLogicDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (BOOL)modifyAppAllScope:(id)a0 Scene:(unsigned int)a1;
- (BOOL)modifyApp:(id)a0 scope:(id)a1 Scene:(unsigned int)a2;
- (BOOL)deleteApp:(id)a0 scene:(unsigned int)a1;
- (void)handleModResp:(id)a0;
- (void)handleDelResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end

@protocol IESLiveMonitor;

@interface IESLiveGiftMostlyUsedAPI : HTSLiveApi

@property (weak, nonatomic) id<IESLiveMonitor> monitor;

- (void)trackService:(id)a0 error:(id)a1 extra:(id)a2;
- (void)switchPinStatus:(BOOL)a0 roomID:(id)a1 completion:(id /* block */)a2;
- (void)switchGiftStatus:(BOOL)a0 roomID:(id)a1 giftID:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end

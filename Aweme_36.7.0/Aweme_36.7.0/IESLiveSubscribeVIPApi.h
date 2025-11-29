@interface IESLiveSubscribeVIPApi : HTSLiveApi

@property (nonatomic) BOOL fakeBecome;

- (id)p_sourceFromUpdateType:(long long)a0;
- (void)monitor_fetchSubscribeEmojiListWithUpdateType:(long long)a0 duration:(double)a1 error:(id)a2;
- (void)fetchSubscribeEmojiListWithRoom:(id)a0 updateType:(long long)a1 completion:(id /* block */)a2;
- (void)reportVipRechargeStrategy:(BOOL)a0 duration:(id)a1;

@end

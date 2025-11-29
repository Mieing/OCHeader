@class NSString;

@interface AWEUGFCollectWatchAdServiceImpl : HTSService <AWEUGFCollectWatchAdService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getAdRewardInfo:(id)a0 needNext:(BOOL)a1 completion:(id /* block */)a2;
- (void)reportTaskComplete:(id)a0 token:(id)a1 isFirstReward:(BOOL)a2 completion:(id /* block */)a3;
- (void)showRewardToast:(id)a0 withImage:(BOOL)a1;

@end

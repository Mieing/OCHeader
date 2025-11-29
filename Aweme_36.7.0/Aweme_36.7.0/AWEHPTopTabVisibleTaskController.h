@class AWEFeedChannelObject;

@interface AWEHPTopTabVisibleTaskController : NSObject

@property (weak, nonatomic) AWEFeedChannelObject *channel;

- (id)applyTopBarHiddenTaskWithConfig:(id)a0;
- (id)applyTopBarAlphaTaskWithConfig:(id)a0;
- (void)pushAlphaTask:(id)a0 animateDuration:(id)a1;
- (void)removeAlphaTask:(id)a0 animateDuration:(id)a1;
- (void)updateAlphaTask:(id)a0 animateDuration:(id)a1;
- (void)deallocAlphaTask:(id)a0;
- (void)p_tryUpdateAlphaWithSuccessCompletion:(id /* block */)a0;
- (void)pushHiddenTask:(id)a0;
- (void)removeHiddenTask:(id)a0;
- (void)updateHiddenTask:(id)a0;
- (void)deallocHiddenTask:(id)a0;
- (void)p_tryUpdateHiddenWithSuccessCompletion:(id /* block */)a0;
- (void)p_canUpdateUIWithCompareBlock:(id /* block */)a0 successCompletion:(id /* block */)a1;
- (void)didSelectedChannelFromChannel:(id)a0;
- (void)updateAlphaWithTopManager:(id)a0 task:(id)a1 callerID:(id)a2 animateDuration:(id)a3;
- (void)updateHiddenWithTopManager:(id)a0 task:(id)a1 callerID:(id)a2;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;

@end

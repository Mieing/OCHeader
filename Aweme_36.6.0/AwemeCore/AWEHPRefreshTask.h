@class AWEFeedChannelRefreshModel, NSMutableArray, NSString;
@protocol AWEHPRefreshTaskAnimationDelegate;

@interface AWEHPRefreshTask : NSObject

@property (nonatomic) double startAnimationTime;
@property (retain, nonatomic) NSMutableArray *refreshCompletionHandlers;
@property (nonatomic) BOOL isRefreshAnimationShowing;
@property (retain, nonatomic) NSMutableArray *endAnimationCompletionList;
@property (readonly, nonatomic) long long taskID;
@property (readonly, nonatomic) long long status;
@property (retain, nonatomic) AWEFeedChannelRefreshModel *refreshModel;
@property (copy, nonatomic) NSString *refreshTab;
@property (nonatomic) long long animateType;
@property (weak, nonatomic) id<AWEHPRefreshTaskAnimationDelegate> animationDelegate;
@property (nonatomic) double minAnimateDuration;
@property (nonatomic) double maxAnimateDuration;

- (void)beginRefresh;
- (void)forceStopRefreshAnimationIfNeed;
- (void)registerRefreshCompletionHandler:(id /* block */)a0;
- (void)endRefreshWithResult:(long long)a0;
- (void)p_beginRefreshAnimation;
- (void)p_stopRefreshAnimationIfNeedForce:(BOOL)a0 completion:(id /* block */)a1;
- (void)taskCompleteWithResult:(long long)a0;
- (void)p_stopRefreshAnimation;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;

@end

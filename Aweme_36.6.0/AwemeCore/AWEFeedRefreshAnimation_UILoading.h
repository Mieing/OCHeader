@class NSString, UIViewController, AWEUILoadingView;

@interface AWEFeedRefreshAnimation_UILoading : UIView <AWEFeedRefreshAnimationProtocol>

@property (weak, nonatomic) UIViewController *controller;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isRefreshing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationWithController:(id)a0;

- (void)dragWithProgress:(double)a0;
- (void)dragCancellation;
- (void)beginRefreshingAfterDragEnd;
- (void)dragToEndWithProgress:(double)a0 refreshBlock:(id /* block */)a1;
- (void)adjustFrame;
- (void).cxx_destruct;
- (void)beginRefreshing;
- (id)initWithController:(id)a0;
- (void)stopRefreshing;

@end

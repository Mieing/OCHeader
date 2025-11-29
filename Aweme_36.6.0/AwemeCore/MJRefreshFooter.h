@interface MJRefreshFooter : MJRefreshComponent

@property (nonatomic) double ignoredScrollViewContentInsetBottom;
@property (nonatomic, getter=isAutomaticallyHidden) BOOL automaticallyHidden;

+ (id)footerWithRefreshingBlock:(id /* block */)a0;
+ (id)footerWithRefreshingTarget:(id)a0 refreshingAction:(SEL)a1;

- (void)resetNoMoreData;
- (void)endRefreshingWithNoMoreData;
- (void)noticeNoMoreData;
- (void)prepare;
- (void)willMoveToSuperview:(id)a0;

@end

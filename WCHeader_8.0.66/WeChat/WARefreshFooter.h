@interface WARefreshFooter : WARefreshComponent

@property (nonatomic) double ignoredScrollViewContentInsetBottom;

+ (id)footerWithRefreshingBlock:(id /* block */)a0;

- (void)prepare;
- (void)endRefreshingWithNoMoreData;
- (void)noticeNoMoreData;
- (void)resetNoMoreData;

@end

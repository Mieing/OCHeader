@class NSString;

@interface AWELiveScrollRefreshServiceImpl : NSObject <IESLiveScrollRefreshService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getMJRefreshState:(long long)a0;
+ (long long)getScrollRefreshState:(long long)a0;

- (void)scrollView:(id)a0 setFooterTitle:(id)a1 forState:(long long)a2;
- (void)scrollView:(id)a0 setInnerFeedHeaderWithRefreshingBlock:(id /* block */)a1;
- (void)scrollView:(id)a0 setInnerFeedFooterWithRefreshingBlock:(id /* block */)a1 style:(long long)a2;
- (void)scrollView:(id)a0 setInnerFeedFooterTitle:(id)a1 forState:(long long)a2;
- (void)startInnerFeedFooterRefreshWithScrollView:(id)a0;
- (void)endInnerFeedFooterRefreshWithScrollView:(id)a0;
- (BOOL)isInnerFeedFooterDisplayRefreshing:(id)a0;
- (void)endInnerFeedFooterDisplayRefreshing:(id)a0;
- (void)hiddenHeaderRefreshForScrollView:(id)a0;
- (void)showHeaderRefreshForScrollView:(id)a0;
- (id)scrollView:(id)a0 setHeaderWithRefreshingBlock:(id /* block */)a1;
- (id)scrollView:(id)a0 setFooterWithRefreshingBlock:(id /* block */)a1;
- (void)scrollView:(id)a0 setFooterTitle:(id)a1;
- (void)scrollView:(id)a0 setFooterTitleFont:(id)a1;
- (void)scrollView:(id)a0 setFooterTitleColor:(id)a1;
- (void)beginHeaderRefreshingForScrollView:(id)a0;
- (void)endHeaderRefreshingForScrollView:(id)a0;
- (void)endRefreshingForScrollView:(id)a0;
- (void)scrollView:(id)a0 setLiveRoomHeaderWithRefreshingBlock:(id /* block */)a1;
- (void)scrollView:(id)a0 setLiveRoomrHeaderWithRefreshingStateBlock:(id /* block */)a1;

@end

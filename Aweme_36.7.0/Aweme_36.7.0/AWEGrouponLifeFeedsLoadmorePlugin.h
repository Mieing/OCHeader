@interface AWEGrouponLifeFeedsLoadmorePlugin : AWEGrouponLifeFeedsBasePlugin

@property (nonatomic) long long numberOfTriggers;
@property (readonly, nonatomic) long long loadingMore;
@property (nonatomic) double previousLoadmoreTime;
@property (nonatomic) double minIntervalDuration;
@property (nonatomic) BOOL paddingLoadMoreEvent;
@property (nonatomic) BOOL pageDidScroll;
@property (nonatomic) double loadMoreComponentShowTime;
@property (nonatomic) long long loadBrush;
@property (nonatomic) double autoRequestDuration;
@property (nonatomic) double pageInitTime;

- (void)loadMore;
- (void)componentStartShow:(id)a0 reason:(unsigned long long)a1;
- (void)pageDidScroll:(id)a0 scrollView:(id)a1;
- (void)hostPageDidScroll:(id)a0 scrollView:(id)a1 hostPageScrollViewOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)tryLoadMore;
- (void)addAutoLoadMoreTask;
- (void)tryLoadMoreWhenPageFirstScroll;
- (void)trackLoadingStatus;
- (unsigned char)shouldForbidLoadMore;
- (id)init;

@end

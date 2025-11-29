@class AWEGrouponLifeFeedsLoadMoreComponentView, NSString, AWEGrouponLifeFeedsLoadmorePlugin, AWEGrouponTabLoadMoreFooter;

@interface AWEGrouponLifeFeedsLoadMoreComponentVM : AWEGrouponLifeFeedsBaseComponentVM

@property (copy, nonatomic) NSString *pullUpText;
@property (copy, nonatomic) NSString *loadingText;
@property (copy, nonatomic) NSString *noMoreText;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long index;
@property (readonly, nonatomic) AWEGrouponLifeFeedsLoadMoreComponentView *loadMoreComponentView;
@property (readonly, nonatomic) AWEGrouponLifeFeedsLoadmorePlugin *loadmorePlugin;
@property (retain, nonatomic) AWEGrouponTabLoadMoreFooter *noMoreStyle;
@property (copy, nonatomic) NSString *loadingImageURL;
@property (readonly, nonatomic) BOOL loadingMore;

- (void)startLoadMore;
- (void)endLoadMore;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0 presetHeight:(double)a1;
- (void)bindStateAndAction;
- (void)componentStartShow:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end

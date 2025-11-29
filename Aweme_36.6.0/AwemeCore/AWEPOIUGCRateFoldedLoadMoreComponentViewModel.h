@class AWEPOIDetailNGPageContext, NSArray, NSString;

@interface AWEPOIUGCRateFoldedLoadMoreComponentViewModel : DitoComponentViewModel

@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (nonatomic) BOOL hasTrackedShow;
@property (copy, nonatomic) NSArray *nodeEventList;
@property (nonatomic) BOOL didRemoveDefaultLoadMore;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL folded;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *desc;

- (id)commonTrackParams;
- (id)componentReuseIdentifier;
- (void)updateNode:(id)a0;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)didLoadPageModel:(id)a0;
- (id)generalContext;
- (void)componentViewDidCompleteShow;
- (void)removeCommentLoadMore;
- (id)rateContext;
- (void)didClickFoldFooter;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end

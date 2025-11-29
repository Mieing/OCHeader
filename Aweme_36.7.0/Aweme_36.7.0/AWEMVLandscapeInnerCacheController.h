@class AWEMVChannelPageContext;

@interface AWEMVLandscapeInnerCacheController : AWEDCFeedBaseController

@property (readonly, nonatomic) AWEMVChannelPageContext *mvContext;

- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;

@end

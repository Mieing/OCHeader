@class NSArray, MJRefreshHeader, MJRefreshFooter, SearchCachalotViewABConfig;
@protocol CachalotRenderPipeline;

@interface SearchCachalotViewConfig : NSObject

@property (copy, nonatomic) NSArray *pipelines;
@property (retain, nonatomic) id<CachalotRenderPipeline> fullPagePipeline;
@property (retain, nonatomic) MJRefreshHeader *headerView;
@property (retain, nonatomic) MJRefreshFooter *footerView;
@property (nonatomic) double loadMoreMargin;
@property (retain, nonatomic) SearchCachalotViewABConfig *abConfig;

- (void)awe_loadDefaultABConfig;
- (void).cxx_destruct;
- (id)init;

@end

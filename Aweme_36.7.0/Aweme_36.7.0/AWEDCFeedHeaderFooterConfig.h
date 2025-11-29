@interface AWEDCFeedHeaderFooterConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enableRefreshHeader;
@property (nonatomic) double headerIgnoredScrollViewContentInsetTop;
@property (nonatomic) BOOL enableRefreshHeaderFastRefresh;
@property (nonatomic) BOOL disableRefreshHeaderAtFirst;
@property (retain, nonatomic) Class headerClass;
@property (nonatomic) BOOL enableLoadMoreFooter;
@property (retain, nonatomic) Class footerClass;
@property (copy, nonatomic) id /* block */ footerConfigBlock;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end

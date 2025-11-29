@class NSMutableDictionary;

@interface MMWebViewPlugin_BrandLive : MMWebViewPluginBase

@property (nonatomic) BOOL hasLiveTitleViewReport;
@property (nonatomic) BOOL hasProfileTitleViewLiveReport;
@property (retain, nonatomic) NSMutableDictionary *customBrandLiveDict;

- (id)init;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)configureCustomBrandLiveModel:(id)a0;
- (void)updateAndFetchBrandLiveInfo;
- (void)updateLiveStatus:(BOOL)a0;
- (void)tryfetchBrandLiveInfo;
- (void)pullBizLivingInfo;
- (BOOL)isCurrentPageBrandLiving;
- (void)openFinderLiveWithScene:(unsigned int)a0;
- (id)getCustomModelForCurrentPage;
- (id)getBrandUserNameForCurrentPage;
- (void)onBrandLivingStatusChange:(id)a0 isLiving:(BOOL)a1 finderFeedExportId:(id)a2;
- (void)reportProfileTitleViewLiveShow;
- (void)reportLiveTitleViewShow;
- (void)reportLiveTopBarAction:(BOOL)a0 fromProfileTopBar:(BOOL)a1;
- (void).cxx_destruct;

@end

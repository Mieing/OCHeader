@class NSArray, AWESelectTemplateDataCache, NSString, AWESelectTemplateDataProvider, AWESelectTemplateDataPreload, AWESelectTemplateViewModel;

@interface AWESelectTemplateDataStrategyOneClickFilming : NSObject <AWESelectTemplateDataStrategy>

@property (weak, nonatomic) AWESelectTemplateViewModel *viewModel;
@property (copy, nonatomic) NSArray *recommendTemplateArray;
@property (retain, nonatomic) AWESelectTemplateDataProvider *templateDataProvider;
@property (retain, nonatomic) AWESelectTemplateDataPreload *templateDataPreload;
@property (retain, nonatomic) AWESelectTemplateDataCache *templateCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)templateRecommendAssetsChanged;
- (void)templatesfetch;
- (void)templateResourcePreload;
- (BOOL)hasTemplateCacheForIndex:(unsigned long long)a0;
- (void)templateGenerateData;
- (void)templateGenerateDataCancel;
- (void)setupWithTemplateViewModel:(id)a0;
- (void)templateSelectWithIndex:(long long)a0;
- (void)templateGenerateDataWithIndex:(long long)a0;
- (void)templateResourcePreloadCancel;
- (void)templateDataCheck;
- (void)refreshSelectTemplateModels;
- (void)syncRepoOneClickFilming;
- (void).cxx_destruct;

@end

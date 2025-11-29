@class NSString, AWESelectTemplateViewModel;

@interface AWESelectTemplateDataStrategyCutSame : NSObject <AWESelectTemplateDataStrategy>

@property (weak, nonatomic) AWESelectTemplateViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)templateRecommendAssetsChanged;
- (void)templatesfetch;
- (void)templateResourcePreload;
- (void)templateGenerateData;
- (void)templateGenerateDataCancel;
- (void)setupWithTemplateViewModel:(id)a0;
- (void)templateSelectWithIndex:(long long)a0;
- (void)templateGenerateDataWithIndex:(long long)a0;
- (void)templateResourcePreloadCancel;
- (void)templateDataCheck;
- (void).cxx_destruct;

@end

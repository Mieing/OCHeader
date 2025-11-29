@class NSString, AWESearchGoodsFeedbackModel, AWESearchNoResultModel, AWESearchNilTextModel, AWESearchNilInfoModel;

@interface AWEEcomSearchResultEmptyConfig : MTLModel <AWEEcomSearchResultModelAdapterProtocol, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchNilInfoModel *searchNilInfo;
@property (retain, nonatomic) AWESearchNilTextModel *searchNilText;
@property (retain, nonatomic) AWESearchGoodsFeedbackModel *feedbackConfig;
@property (retain, nonatomic) AWESearchNoResultModel *noResultConfig;
@property (nonatomic) BOOL feedDisableScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchNilInfoJSONTransformer;
+ (id)searchNilTextJSONTransformer;
+ (id)feedbackConfigJSONTransformer;
+ (id)noResultConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)fillMerchandiseResp:(id)a0;
- (void).cxx_destruct;

@end

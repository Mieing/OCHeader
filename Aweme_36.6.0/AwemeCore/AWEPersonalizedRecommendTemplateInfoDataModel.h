@class NSString, AWEPersonalizedRecommendTemplateInfoDataInfoModel;

@interface AWEPersonalizedRecommendTemplateInfoDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPersonalizedRecommendTemplateInfoDataInfoModel *dataInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSArray, ACCTemplateTimeRange, ACCTemplateClipInfo, NSString, ACCTemplateMaterialInfo;

@interface ACCMiniTextTemplateConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) ACCTemplateMaterialInfo *material;
@property (retain, nonatomic) ACCTemplateTimeRange *timeRange;
@property (copy, nonatomic) NSArray *resourceTexts;
@property (retain, nonatomic) ACCTemplateClipInfo *clip;
@property (copy, nonatomic) NSString *moveFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeRangeJSONTransformer;
+ (id)materialJSONTransformer;
+ (id)clipJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

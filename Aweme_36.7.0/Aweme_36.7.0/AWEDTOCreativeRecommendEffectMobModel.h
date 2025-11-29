@class NSArray, NSString;

@interface AWEDTOCreativeRecommendEffectMobModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *recordStickerBizList;
@property (copy, nonatomic) NSArray *editStickerBizList;
@property (copy, nonatomic) NSArray *editTemplateBizList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSArray, NSString;

@interface IESEffectSearchRecommendResponseModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSArray *recommendModels;
@property (readonly, copy, nonatomic) NSString *searchTips;
@property (readonly, copy, nonatomic) NSString *imprID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end

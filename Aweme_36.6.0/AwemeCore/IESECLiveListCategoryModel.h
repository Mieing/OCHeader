@class NSArray, NSString;

@interface IESECLiveListCategoryModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *tabModels;
@property (nonatomic) unsigned long long tabValidMinGoodsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

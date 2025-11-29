@class NSArray, NSDictionary, NSString, NSNumber;

@interface AWEEmojiStoreRecommendResourcesInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSNumber *nextCursor;
@property (copy, nonatomic) NSArray *recommendResources;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)recommendResourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

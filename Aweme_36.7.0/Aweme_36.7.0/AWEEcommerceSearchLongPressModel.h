@class NSArray, NSString;

@interface AWEEcommerceSearchLongPressModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *dislikeInfoList;
@property (copy, nonatomic) NSString *findSimilarSchemaTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dislikeInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

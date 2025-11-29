@class NSString, NSDictionary;

@interface AWEStarAtlasTCMCreateItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long starAtlasType;
@property (copy, nonatomic) NSString *starAtlasOrderID;
@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *productName;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)starAtlasTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

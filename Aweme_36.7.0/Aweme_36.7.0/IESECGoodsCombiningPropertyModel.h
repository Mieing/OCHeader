@class NSArray, NSDictionary, NSString;

@interface IESECGoodsCombiningPropertyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *skus;
@property (copy, nonatomic) NSDictionary *productFormats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)skusJSONTransformer;
+ (id)productFormatsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

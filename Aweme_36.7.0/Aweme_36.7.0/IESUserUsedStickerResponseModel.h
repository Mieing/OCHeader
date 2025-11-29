@class NSArray, NSString;

@interface IESUserUsedStickerResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSArray *collection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectsJSONTransformer;
+ (id)collectionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end

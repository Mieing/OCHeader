@interface AWEMusicStreamingImpl.LunaBaseApiModel : MTLModel <MTLJSONSerializing>

+ (id)JSONKeyPathsByPropertyKey;
+ (id)encodingBehaviorsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

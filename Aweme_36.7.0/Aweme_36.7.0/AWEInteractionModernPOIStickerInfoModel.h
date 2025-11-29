@class NSArray, NSString;

@interface AWEInteractionModernPOIStickerInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long currentEffectIndex;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSString *currentPath;
@property (nonatomic) unsigned long long loadingEffectIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

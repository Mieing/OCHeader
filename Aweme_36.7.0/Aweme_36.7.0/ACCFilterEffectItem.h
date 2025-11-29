@class NSString;

@interface ACCFilterEffectItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) float maxPercent;
@property (nonatomic) float minPercent;
@property (nonatomic) float defaultPercent;
@property (readonly, nonatomic) float defaultIntensity;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

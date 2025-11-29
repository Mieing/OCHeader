@class NSString;

@interface AWEComposerBeautyEffectItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) float maxValue;
@property (nonatomic) float minValue;
@property (nonatomic) float defaultValue;
@property (nonatomic) float maxPercent;
@property (nonatomic) float minPercent;
@property (nonatomic) float defaultPercent;
@property (nonatomic) BOOL isDoubleDirection;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *resource;
@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSString *resourceID;
@property (nonatomic) float defaultRatio;
@property (readonly, nonatomic) float defaultPosition;
@property (nonatomic) float currentRatio;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (float)effectValueForRatio:(double)a0;
- (id)tagForCache;
- (void).cxx_destruct;

@end

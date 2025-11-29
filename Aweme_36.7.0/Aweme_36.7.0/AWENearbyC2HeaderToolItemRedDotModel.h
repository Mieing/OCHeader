@class NSString, NSDictionary, AWENearbyGrouponCommonFrequencyData, AWENearbyC2HeaderToolItemRedDotAnimation;

@interface AWENearbyC2HeaderToolItemRedDotModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *dotText;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) AWENearbyGrouponCommonFrequencyData *frequencyData;
@property (retain, nonatomic) AWENearbyC2HeaderToolItemRedDotAnimation *animation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)animationJSONTransformer;
+ (id)frequencyDataJSONTransformer;

- (void).cxx_destruct;

@end

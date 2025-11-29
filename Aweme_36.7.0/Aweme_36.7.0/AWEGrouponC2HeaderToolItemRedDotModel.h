@class NSString, NSDictionary, AWEGrouponCommonFrequencyData, AWEGrouponC2HeaderToolItemRedDotAnimation;

@interface AWEGrouponC2HeaderToolItemRedDotModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *dotText;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) AWEGrouponCommonFrequencyData *frequencyData;
@property (retain, nonatomic) AWEGrouponC2HeaderToolItemRedDotAnimation *animation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)animationJSONTransformer;
+ (id)frequencyDataJSONTransformer;

- (void).cxx_destruct;

@end

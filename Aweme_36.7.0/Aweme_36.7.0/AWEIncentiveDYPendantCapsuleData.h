@class NSArray, NSString, AWEIncentiveDYPendantBackgroundData;

@interface AWEIncentiveDYPendantCapsuleData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIncentiveDYPendantBackgroundData *background;
@property (copy, nonatomic) NSArray *combineTexts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)combineTextsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

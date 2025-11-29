@class NSArray, NSNumber, NSString;

@interface AWEAntiAddictStrategyDynamicToastModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSArray *dynamicRemindUsageRange;
@property (readonly, copy, nonatomic) NSNumber *dynamicRemindMultiplier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)dynamicRemindUsageRangeMin;
- (long long)dynamicRemindUsageRangeMax;
- (id)initWithDynamicRemindUsageRange:(id)a0 dynamicRemindMultiplier:(double)a1;
- (void).cxx_destruct;
- (BOOL)isValid;

@end

@class AWEAntiAddictDefaultMaskConfigModel, NSString;

@interface AWEAntiAddictNormalMaskConfigModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) AWEAntiAddictDefaultMaskConfigModel *defaultSleepDayConfig;
@property (readonly, nonatomic) AWEAntiAddictDefaultMaskConfigModel *defaultSleepNightConfig;
@property (readonly, nonatomic) AWEAntiAddictDefaultMaskConfigModel *defaultRestMaskConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultSleepDayConfigJSONTransformer;
+ (id)defaultSleepNightConfigJSONTransformer;
+ (id)defaultRestMaskConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class AWEAntiAddictNormalMaskConfigModel, AWEAntiAddictDailyAlertConfigWrapper, NSString;

@interface AWEAntiAddictUIConfigModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) AWEAntiAddictDailyAlertConfigWrapper *dailyAlertUIConfig;
@property (readonly, nonatomic) AWEAntiAddictNormalMaskConfigModel *normalMaskConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dailyAlertUIConfigJSONTransformer;
+ (id)normalMaskConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

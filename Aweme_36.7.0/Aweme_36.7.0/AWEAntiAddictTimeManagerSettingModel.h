@class AWEAntiAddictDailyAlertUIConfig, NSString;

@interface AWEAntiAddictTimeManagerSettingModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAntiAddictDailyAlertUIConfig *dailyAlertUIConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dailyAlertUIConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

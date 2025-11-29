@class NSString, AWEAntiAddictDailyAlertConfigModel;

@interface AWEAntiAddictDailyAlertConfigWrapper : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) AWEAntiAddictDailyAlertConfigModel *dayConfig;
@property (readonly, nonatomic) AWEAntiAddictDailyAlertConfigModel *nightConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dayConfigJSONTransformer;
+ (id)nightConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

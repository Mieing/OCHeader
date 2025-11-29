@class NSString;

@interface AWEAntiAddictNoticeSettingModel : MTLModel <MTLJSONSerializing, AWEAntiAddictSettingModel>

@property (class, readonly, nonatomic) BOOL enableAntiAddict;

@property (nonatomic) double antiAddictionDayTime;
@property (nonatomic) double antiAddictionNightTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end

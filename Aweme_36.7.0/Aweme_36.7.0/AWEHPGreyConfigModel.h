@class NSString, NSDictionary;

@interface AWEHPGreyConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hotReloadEnable;
@property (nonatomic) double saturation;
@property (nonatomic) double endTime;
@property (nonatomic) long long allFeedConsumeCount;
@property (copy, nonatomic) NSString *effect;
@property (copy, nonatomic) NSDictionary *tabs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end

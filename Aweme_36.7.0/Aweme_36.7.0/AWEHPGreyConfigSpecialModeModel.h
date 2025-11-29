@class NSString;

@interface AWEHPGreyConfigSpecialModeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hotReloadEnable;
@property (nonatomic) double saturation;
@property (nonatomic) double endTime;
@property (nonatomic) long long allFeedConsumeCount;
@property (copy, nonatomic) NSString *modelEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end

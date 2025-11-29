@class NSString;

@interface AWELiteBagGuideTimeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long delaySeconds;
@property (nonatomic) long long launchProtectTime;
@property (nonatomic) long long retryShowTimesSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end

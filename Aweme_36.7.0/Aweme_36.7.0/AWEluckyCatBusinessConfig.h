@class NSString;

@interface AWEluckyCatBusinessConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long widgetCollectSwitchState;
@property (nonatomic) unsigned long long bannerCollectSwitchState;
@property (nonatomic) unsigned long long innerpushCollectSwitchState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end

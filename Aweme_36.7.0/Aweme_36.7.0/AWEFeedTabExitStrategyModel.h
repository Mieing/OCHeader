@class NSString;

@interface AWEFeedTabExitStrategyModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long internalDay;
@property (nonatomic) long long triggerLimit;
@property (nonatomic) long long exitDay;
@property (nonatomic) long long internalHour;
@property (nonatomic) long long exitHour;
@property (nonatomic) long long exitHoursTriggerLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end

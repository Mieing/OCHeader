@class NSString;

@interface AWELiveLocalLifeComponentIconAnimationStrategy : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long totalShowTimes;
@property (nonatomic) long long period;
@property (nonatomic) BOOL isNaturalTime;
@property (nonatomic) BOOL canCancelShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end

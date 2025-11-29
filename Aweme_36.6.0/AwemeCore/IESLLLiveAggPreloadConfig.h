@class NSString;

@interface IESLLLiveAggPreloadConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long ageLimit;
@property (nonatomic) long long randomTime;
@property (nonatomic) BOOL enable;
@property (nonatomic) long long delayLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end

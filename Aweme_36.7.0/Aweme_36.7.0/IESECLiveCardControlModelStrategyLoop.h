@class NSString;

@interface IESECLiveCardControlModelStrategyLoop : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long frequency;
@property (nonatomic) long long interval;
@property (nonatomic) long long delay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end

@class NSArray, NSString;

@interface AWEButtonTriggerStrategyModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *triggerActions;
@property (nonatomic) long long playProgress;
@property (nonatomic) long long stayTime;
@property (nonatomic) long long animation;
@property (copy, nonatomic) NSArray *btnDataKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

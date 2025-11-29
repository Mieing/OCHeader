@class NSString;

@interface IESECLiveCardControlModelStrategyAction : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long stage;
@property (nonatomic) long long delay;
@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSString *actionParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, IESECLiveCardControlModelStrategy;

@interface IESECLiveCardControlModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long priority;
@property (retain, nonatomic) IESECLiveCardControlModelStrategy *strategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)strategyJSONTransformer;

- (void).cxx_destruct;

@end

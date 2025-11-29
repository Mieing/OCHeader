@class NSString, IESECLiveCardControlModelStrategyLoop, IESECLiveCardControlModelStrategyAction;

@interface IESECLiveCardControlModelStrategy : MTLModel <MTLJSONSerializing>

@property (nonatomic) double duration;
@property (retain, nonatomic) IESECLiveCardControlModelStrategyLoop *loop;
@property (retain, nonatomic) IESECLiveCardControlModelStrategyAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionJSONTransformer;
+ (id)loopJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

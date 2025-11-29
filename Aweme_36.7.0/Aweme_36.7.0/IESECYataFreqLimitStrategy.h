@class NSString, IESECYataFreqActions;

@interface IESECYataFreqLimitStrategy : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECYataFreqActions *actions;
@property (copy, nonatomic) NSString *targetStatus;
@property (nonatomic) double freezingPeriod;
@property (nonatomic) double lookbackPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

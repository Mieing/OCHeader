@class NSString, NSArray, AWEGrouponTaskCombinationJudgeNode;

@interface AWEGrouponTaskTriggerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *triggerType;
@property (copy, nonatomic) NSArray *triggerSource;
@property (retain, nonatomic) AWEGrouponTaskCombinationJudgeNode *triggerCombination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)triggerCombinationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

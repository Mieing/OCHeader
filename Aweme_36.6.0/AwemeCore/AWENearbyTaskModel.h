@class NSString, NSArray, AWENearbyTaskUIConfig, NSNumber, AWENearbyTaskTriggerModel;

@interface AWENearbyTaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uniqueKey;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *taskType;
@property (retain, nonatomic) NSNumber *priority;
@property (retain, nonatomic) NSNumber *delay;
@property (retain, nonatomic) AWENearbyTaskTriggerModel *triggerModel;
@property (copy, nonatomic) NSString *dataString;
@property (copy, nonatomic) NSArray *taskRunLogic;
@property (retain, nonatomic) AWENearbyTaskUIConfig *taskUiConfig;
@property (nonatomic) BOOL isLoopTask;
@property (retain, nonatomic) AWENearbyTaskTriggerModel *destoryTrigger;
@property (retain, nonatomic) id businessData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)triggerModelJSONTransformer;
+ (id)taskRunLogicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

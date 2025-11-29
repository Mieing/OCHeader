@class AWEGrouponTaskUIConfig, NSString, NSArray, NSNumber, AWEGrouponTaskTriggerModel;

@interface AWEGrouponTaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uniqueKey;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *taskType;
@property (retain, nonatomic) NSNumber *priority;
@property (retain, nonatomic) NSNumber *delay;
@property (retain, nonatomic) AWEGrouponTaskTriggerModel *triggerModel;
@property (copy, nonatomic) NSString *dataString;
@property (copy, nonatomic) NSArray *taskRunLogic;
@property (retain, nonatomic) AWEGrouponTaskUIConfig *taskUiConfig;
@property (nonatomic) BOOL isLoopTask;
@property (retain, nonatomic) AWEGrouponTaskTriggerModel *destoryTrigger;
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

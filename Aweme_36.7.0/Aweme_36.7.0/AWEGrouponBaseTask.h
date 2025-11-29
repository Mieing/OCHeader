@class NSMutableDictionary, NSString, NSMutableSet, AWEGrouponTaskModel, AWEGrouponTaskExecuteContext;

@interface AWEGrouponBaseTask : NSObject <AWEGrouponTaskProtocol>

@property (retain, nonatomic) AWEGrouponTaskModel *taskModel;
@property (retain, nonatomic) AWEGrouponTaskExecuteContext *executeContext;
@property (retain, nonatomic) NSMutableSet *triggerCombinationSet;
@property (retain, nonatomic) NSMutableDictionary *triggerConditionSet;
@property (retain, nonatomic) NSMutableSet *destoryTriggerCombinationSet;
@property (retain, nonatomic) NSMutableDictionary *destoryTriggerConditionSet;
@property (copy, nonatomic) NSString *excutedTriggerType;
@property (nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskModel:(id)a0;
- (id)uiComponentID;
- (id)uiComponentType;
- (BOOL)coldStartLimit;
- (id)triggerCombination;
- (long long)threadMode;
- (BOOL)isLoopTask;
- (id)destoryTrigger;
- (id)taskRunLogic;
- (long long)useDefaultRule;
- (id)triggerSourceID;
- (void)taskDiscarded;
- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)uniqueKey;
- (double)priority;
- (id)taskID;
- (id)triggerType;
- (id)data;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)taskType;
- (double)delaySeconds;
- (id)triggerSource;

@end

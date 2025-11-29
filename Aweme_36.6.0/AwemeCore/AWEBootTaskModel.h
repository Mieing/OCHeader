@class NSArray, NSString;

@interface AWEBootTaskModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enableDispatch;
@property (nonatomic) double startInterval;
@property (nonatomic) double stopInterval;
@property (nonatomic) double maxWaitingInterval;
@property (nonatomic) double sparseDelayTime;
@property (nonatomic) double feedReadyInterval;
@property (nonatomic) double sparseInterval;
@property (nonatomic) double idleInterval;
@property (retain, nonatomic) NSArray *bannedTasks;
@property (retain, nonatomic) NSArray *immediatelyTasks;
@property (retain, nonatomic) NSArray *feedReadyTasks;
@property (retain, nonatomic) NSArray *sparseTasks;
@property (retain, nonatomic) NSArray *idleTasks;
@property (retain, nonatomic) NSArray *allowAfterFeedReadyTasks;
@property (copy, nonatomic) NSArray *timeValidConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeValidConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end

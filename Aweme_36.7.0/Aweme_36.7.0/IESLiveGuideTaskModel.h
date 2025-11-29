@class NSString, IESLiveGuideTaskState;

@interface IESLiveGuideTaskModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long taskID;
@property (retain, nonatomic) IESLiveGuideTaskState *taskState;
@property (retain, nonatomic) NSString *taskVersion;
@property (nonatomic) unsigned long long taskType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskStateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isEqual:(id)a0;

@end

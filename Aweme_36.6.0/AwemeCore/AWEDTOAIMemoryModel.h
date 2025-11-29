@class AWEDTOAIMemoryMobModel, NSArray, NSString, AWEDTOAIMemoryEffectParam, AWEDTOAIMemoryGenerateParam;

@interface AWEDTOAIMemoryModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isAiMemory;
@property (nonatomic) BOOL isSavedFromAsync;
@property (copy, nonatomic) NSArray *templateIdList;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) long long status;
@property (nonatomic) long long createTime;
@property (nonatomic) long long waitingTime;
@property (copy, nonatomic) NSString *templateSerialization;
@property (copy, nonatomic) NSString *coverRelativePath;
@property (retain, nonatomic) AWEDTOAIMemoryEffectParam *aiMemoryEffectParam;
@property (retain, nonatomic) AWEDTOAIMemoryGenerateParam *aiMemoryGenerateParam;
@property (retain, nonatomic) AWEDTOAIMemoryMobModel *aiMemoryMobModel;
@property (nonatomic) BOOL isFromAiMemoryEntrance;
@property (copy, nonatomic) NSString *aiMemoryEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aiMemoryEffectParamJSONTransformer;
+ (id)aiMemoryGenerateParamJSONTransformer;
+ (id)aiMemoryMobModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

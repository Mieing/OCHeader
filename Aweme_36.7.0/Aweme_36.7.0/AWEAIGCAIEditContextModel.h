@class NSString, NSArray, ACCAIGCUGCFusionCreationToolsModel, NSMutableArray;

@interface AWEAIGCAIEditContextModel : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) ACCAIGCUGCFusionCreationToolsModel *memoryModel;
@property (retain, nonatomic) NSArray *aiMateEditEffectConfigs;
@property (retain, nonatomic) NSMutableArray *didGeneratedTaskLists;
@property (retain, nonatomic) NSMutableArray *ugcFusionModelLists;
@property (nonatomic) unsigned long long currentSelectedIndex;
@property (nonatomic) BOOL hadBeenCreatedAIMateTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)didGeneratedTaskListsJSONTransformer;
+ (id)ugcFusionModelListsJSONTransformer;
+ (id)aiMateEditEffectConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getTaskInfoModelWithBizUUID:(id)a0;
- (id)getCurrentUseTaskInfoModel;
- (id)aiMateEditCommonTrackWithBizUUID:(id)a0;
- (id)getLastCreateTaskInfoModel;
- (id)getGeneratedTaskGroupId;
- (id)getUGCModelWithBizUUID:(id)a0;
- (void)clearAllEditContext;
- (id)aiMateEditCommonTrack;
- (id)getAllAIMateEditTaskIds;
- (BOOL)hasLoadingTask;
- (BOOL)hasSuccessTask;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

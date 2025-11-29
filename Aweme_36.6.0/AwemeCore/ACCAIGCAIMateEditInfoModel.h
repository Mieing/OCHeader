@class ACCAIGCTaskRetryDetailModel, NSString, NSArray, NSDictionary, IESEffectModel, ACCAIGCUGCFusionCreationToolsModel;

@interface ACCAIGCAIMateEditInfoModel : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long status;
@property (nonatomic) double createTaskTime;
@property (copy, nonatomic) NSString *originalFilePath;
@property (copy, nonatomic) NSString *inputFilePath;
@property (copy, nonatomic) NSString *inputVideoFilePath;
@property (copy, nonatomic) NSString *inputVideoFileUri;
@property (copy, nonatomic) NSString *bizUUID;
@property (copy, nonatomic) NSString *fromUGCModelBizUUID;
@property (retain, nonatomic) ACCAIGCUGCFusionCreationToolsModel *launchUGCModel;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *projectUUID;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *customStickerId;
@property (copy, nonatomic) NSString *effectName;
@property (nonatomic) unsigned long long effectType;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (retain, nonatomic) ACCAIGCTaskRetryDetailModel *retryInfo;
@property (nonatomic) BOOL isRetry;
@property (nonatomic) BOOL inProgress;
@property (nonatomic) unsigned long long originalAssetType;
@property (nonatomic) unsigned long long postTaskType;
@property (nonatomic) unsigned long long generatedType;
@property (nonatomic) double lastProgress;
@property (nonatomic) double lastEstimatedTime;
@property (copy, nonatomic) NSString *outputFileUri;
@property (copy, nonatomic) NSString *outputFilePathName;
@property (copy, nonatomic) NSString *outputFileWaterMarkPathName;
@property (copy, nonatomic) NSString *outputFileCoverPathName;
@property (retain, nonatomic) NSArray *textModel;
@property (copy, nonatomic) NSString *resultFileMetaJson;
@property (copy, nonatomic) NSString *waterMarkMetaJson;
@property (copy, nonatomic) NSString *coverFileMetaJson;
@property (retain, nonatomic) NSDictionary *algorithmLabelDict;
@property (retain, nonatomic) NSArray *atomicList;
@property (retain, nonatomic) NSString *sizeTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isFromImage2ImageScene;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

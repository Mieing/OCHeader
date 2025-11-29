@class ACCAIGCTaskRetryDetailModel, NSString, ACCAIGCTaskCodeInfoModel, ACCAIGCTaskRetryExtraInfoModel, NSArray, AWEStudioAIGCResourceMapModel;

@interface AWEStudioAIGCQueryTaskInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) long long taskStatus;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long createTime;
@property (nonatomic) long long waitMinutes;
@property (nonatomic) long long waitSeconds;
@property (copy, nonatomic) NSString *waitTimeTip;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *ugcEffectId;
@property (copy, nonatomic) NSString *respJson;
@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSString *ugcEffectID;
@property (nonatomic) BOOL inProgress;
@property (retain, nonatomic) ACCAIGCTaskRetryDetailModel *retryDetail;
@property (retain, nonatomic) ACCAIGCTaskRetryExtraInfoModel *retryInfo;
@property (retain, nonatomic) ACCAIGCTaskCodeInfoModel *codeInfo;
@property (copy, nonatomic) NSArray *rawResourceListArray;
@property (copy, nonatomic) NSString *aigcPerformanceInfo;
@property (retain, nonatomic) AWEStudioAIGCResourceMapModel *resourceMap;
@property (retain, nonatomic) NSArray *subTaskList;
@property (copy, nonatomic) NSString *lastTaskId;
@property (copy, nonatomic) NSString *taskGroupId;
@property (nonatomic) BOOL isUserChoose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyToModelClassInArrayMap;
+ (id)retryDetailJSONTransformer;
+ (id)codeInfoJSONTransformer;
+ (id)resourceMapJSONTransformer;
+ (id)retryInfoJSONTransformer;
+ (id)subTaskListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

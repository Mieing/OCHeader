@class AWEAIPropTaskVideoSubSourceResponseModel, NSString, NSArray, ACCAIGCTaskRetryDetailModel, ACCAIGCTaskRetryExtraInfoModel, ACCAIGCTaskCodeInfoModel;

@interface AWEAIGCAsyncTaskGenerationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) unsigned long long estimateWaitTime;
@property (copy, nonatomic) NSString *waitTimeTip;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long resourceType;
@property (retain, nonatomic) AWEAIPropTaskVideoSubSourceResponseModel *cover;
@property (retain, nonatomic) AWEAIPropTaskVideoSubSourceResponseModel *resource;
@property (copy, nonatomic) NSArray *rawMedias;
@property (copy, nonatomic) NSString *stickeId;
@property (retain, nonatomic) NSArray *multiImageList;
@property (copy, nonatomic) NSString *effectExtra;
@property (nonatomic) BOOL inProgress;
@property (nonatomic) double createTime;
@property (retain, nonatomic) ACCAIGCTaskRetryDetailModel *retryDetail;
@property (retain, nonatomic) ACCAIGCTaskRetryExtraInfoModel *extraRetryInfo;
@property (retain, nonatomic) ACCAIGCTaskCodeInfoModel *codeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)resourceJSONTransformer;
+ (id)retryDetailJSONTransformer;
+ (id)codeInfoJSONTransformer;
+ (id)extraRetryInfoJSONTransformer;
+ (id)rawMediasJSONTransformer;
+ (id)multiImageListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

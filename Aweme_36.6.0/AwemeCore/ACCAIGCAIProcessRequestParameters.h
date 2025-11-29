@class NSString;

@interface ACCAIGCAIProcessRequestParameters : NSObject <ACCAIGCAIProcessRequestParametersUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildAIProcessRequestParametersScene:(long long)a0 paths:(id)a1 effectParam:(id)a2 specialConfig:(id)a3 publishModel:(id)a4;
+ (void)trackCreateAigcEffectPublishModel:(id)a0 isCreate:(BOOL)a1 isSuccess:(BOOL)a2;
+ (void)p_handleTrackPublishModel:(id)a0;
+ (id)buildAIEffectRequestParametersPaths:(id)a0 effectParam:(id)a1 specialConfig:(id)a2 publishModel:(id)a3;
+ (id)buildAILoraRequestParametersPaths:(id)a0 effectParam:(id)a1 specialConfig:(id)a2 publishModel:(id)a3;
+ (BOOL)isAIGCUGCFusionCreationRequest:(id)a0;
+ (id)getUnUploadImageFilePath:(id)a0;
+ (id)getUnUploadResourceLisRepoAIGCModel:(id)a0;
+ (id)getUnUploadUGCFusionVideoInfo:(id)a0;
+ (id)getResourceListRepoAIGCModel:(id)a0;
+ (id)getAIFollowResourceListRepoAIGCModel:(id)a0;
+ (BOOL)requestIsAsync:(id)a0;
+ (id)getReferenceEffectIdModel:(id)a0;
+ (id)getEffectUgcExtra:(id)a0;
+ (void)modifyBizParamForEffectCancelMusicIfNeeded:(id)a0 repoAIGC:(id)a1;
+ (id)getResourceType:(id)a0;
+ (id)getAiAutoPromptInfo:(id)a0;
+ (id)getReferenceVideoParamsWithVideoReferenceModel:(id)a0;
+ (id)getReferenceVideoParamsWithCreateModel:(id)a0;
+ (id)getOriginalImageParamsWithRepoAIGCModel:(id)a0;
+ (id)getReferenceImageParamsWithCreateModel:(id)a0;
+ (id)getReferenceVideoKeyFrameParamsWithCreateModel:(id)a0;
+ (id)getReferenceVideoKeyFrameParamsWithVideoReferenceModel:(id)a0;
+ (id)getAIFollowOriginalImageParamsWithRepoAIGCModel:(id)a0;
+ (id)getBodyImageBaheInfo:(id)a0;
+ (BOOL)isAIGCUGCFusionRequestWithReferenceVideo:(id)a0;
+ (id)getBizTypeFromPublishModel:(id)a0;
+ (id)getResourceTypeFromPublishModel:(id)a0;
+ (id)getInputResourceTypeFromPublishModel:(id)a0;
+ (id)buildAIProcessRequestParametersScene:(long long)a0 paths:(id)a1 effectParam:(id)a2 publishModel:(id)a3;
+ (id)buildAIMemoriesRequestParametersWithPublishModel:(id)a0;
+ (id)getAIAssetPrepareRequestParamsWith:(id)a0;


@end

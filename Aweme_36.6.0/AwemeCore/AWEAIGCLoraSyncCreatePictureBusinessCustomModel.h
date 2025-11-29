@class NSError, NSString, NSArray, AWEAIGCLoraLiveResourceInfoModel, ACCAIGCLoraInfoModel, NSDictionary, ACCAIGCAsyncPostProcessTrackInfoModel, IESEffectModel;

@interface AWEAIGCLoraSyncCreatePictureBusinessCustomModel : AWEAIGCBaseBusinessCustomModel

@property (copy, nonatomic) ACCAIGCLoraInfoModel *task;
@property (retain, nonatomic) NSArray *generatedImagesLocalFilePaths;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *taskGroupId;
@property (nonatomic) long long taskStatus;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long waitMinutes;
@property (nonatomic) long long waitSeconds;
@property (copy, nonatomic) NSString *waitTimeTip;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *ugcEffectId;
@property (copy, nonatomic) NSString *respJson;
@property (retain, nonatomic) NSArray *generatedImagesDataModels;
@property (retain, nonatomic) NSArray *videoDataModels;
@property (retain, nonatomic) NSArray *watermarkVideoDataModels;
@property (retain, nonatomic) NSArray *waterMarkImagesDataModels;
@property (retain, nonatomic) NSArray *coverImagesDataModels;
@property (retain, nonatomic) NSArray *textDataModels;
@property (retain, nonatomic) NSArray *musicModels;
@property (copy, nonatomic) NSArray *rawDataModels;
@property (retain, nonatomic) AWEAIGCLoraLiveResourceInfoModel *livePhotoDataModel;
@property (copy, nonatomic) IESEffectModel *effect;
@property (copy, nonatomic) IESEffectModel *ugcEffect;
@property (copy, nonatomic) IESEffectModel *afterEffect;
@property (copy, nonatomic) NSArray *recommendTemplateIds;
@property (copy, nonatomic) NSArray *recommendTemplateArrays;
@property (copy, nonatomic) NSError *effectDownLoadError;
@property (nonatomic) unsigned long long rate;
@property (retain, nonatomic) NSDictionary *extraParamDict;
@property (retain, nonatomic) ACCAIGCAsyncPostProcessTrackInfoModel *postProcessTrackInfoModel;

- (BOOL)isEmptyResult;
- (id)transTextModelFromOriginDataModel;
- (id)getResultModels;
- (void).cxx_destruct;

@end

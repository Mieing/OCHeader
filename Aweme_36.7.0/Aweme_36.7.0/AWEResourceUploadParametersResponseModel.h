@class NSString, AWEPhotoUploadParametersResponseModel, AWEFrameUploadParametersResponseModel, AWEPublishActivityParametersResponseModel, ACCSettingsConfigItem, AWEVideoUploadParametersResponseModel, AWEAudioUploadParametersResponseModel, AWEPublishVideoSyncParametersResponseModel, AWECustomizedPropUploadParametersResponseModel;

@interface AWEResourceUploadParametersResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEVideoUploadParametersResponseModel *videoUploadParameters;
@property (retain, nonatomic) AWEPhotoUploadParametersResponseModel *photoUploadParameters;
@property (retain, nonatomic) AWEFrameUploadParametersResponseModel *frameUploadParameters;
@property (retain, nonatomic) AWEAudioUploadParametersResponseModel *audioUploadParameters;
@property (retain, nonatomic) AWECustomizedPropUploadParametersResponseModel *customizedPropParameters;
@property (retain, nonatomic) AWEPhotoUploadParametersResponseModel *aigcPhotoUploadParameters;
@property (retain, nonatomic) ACCSettingsConfigItem *settingsParameters;
@property (retain, nonatomic) AWEPublishActivityParametersResponseModel *activityParameters;
@property (nonatomic) unsigned long long mediumVideoPlanUserStatus;
@property (retain, nonatomic) AWEPublishVideoSyncParametersResponseModel *videoSyncParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingsParametersJSONTransformer;
+ (id)videoSyncParametersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

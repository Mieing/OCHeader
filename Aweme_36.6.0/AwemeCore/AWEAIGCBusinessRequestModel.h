@class NSArray, NSString, NSDictionary, AWEAIMemoriesBusinessRequestModel;

@interface AWEAIGCBusinessRequestModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *imageAbsolutePathKeyList;
@property (retain, nonatomic) NSArray *imageAbsolutePathValueList;
@property (nonatomic) BOOL isUnifyInteraction;
@property (nonatomic) BOOL aigcUgcFusionEntrance;
@property (nonatomic) BOOL isAIFollowShoot;
@property (retain, nonatomic) NSString *bizType;
@property (nonatomic) long long type;
@property (nonatomic) long long userType;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *placeholderTaskId;
@property (copy, nonatomic) NSString *preUploadTOSTaskId;
@property (copy, nonatomic) NSString *sceneId;
@property (retain, nonatomic) NSString *sceneType;
@property (retain, nonatomic) NSArray *resourceModels;
@property (nonatomic) long long maxTimeOut;
@property (copy, nonatomic) NSString *productDocumentPath;
@property (retain, nonatomic) NSDictionary *imageAbsolutePaths;
@property (retain, nonatomic) NSArray *videoResourceModels;
@property (retain, nonatomic) NSArray *unUploadResourceModels;
@property (copy, nonatomic) NSDictionary *textCreatePicturesExtraParams;
@property (copy, nonatomic) NSDictionary *aigcRequestMeta;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSDictionary *trackExtraParams;
@property (nonatomic) long long queryScene;
@property (nonatomic) long long requestSceneType;
@property (nonatomic) BOOL hasIgnoreAuthor;
@property (nonatomic) BOOL isDownloadEffectModel;
@property (nonatomic) BOOL isDownloadUGCEffectModel;
@property (nonatomic) unsigned long long queryIntervalType;
@property (nonatomic) BOOL shouldIgnoreRawResourceDownload;
@property (retain, nonatomic) NSString *loraResourceType;
@property (nonatomic) BOOL shouldFusionEntranceUploadOriginalImage;
@property (nonatomic) unsigned long long unUploadOriginalImageIndex;
@property (retain, nonatomic) AWEAIMemoriesBusinessRequestModel *aiMemoriesBusinessRequestModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unUploadResourceModelsJSONTransformer;
+ (id)resourceModelsJSONTransformer;
+ (id)aiMemoriesBusinessRequestModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

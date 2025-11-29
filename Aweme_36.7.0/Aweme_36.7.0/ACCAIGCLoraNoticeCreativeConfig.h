@class NSString, NSArray, AWEAIGCAIEditContextModel, IESEffectModel, NSNumber;

@interface ACCAIGCLoraNoticeCreativeConfig : NSObject

@property (retain, nonatomic) NSString *loraId;
@property (retain, nonatomic) IESEffectModel *realUseNotApplyEffect;
@property (retain, nonatomic) NSString *effectId;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) IESEffectModel *ugcEffect;
@property (retain, nonatomic) NSString *ugcEffectId;
@property (retain, nonatomic) IESEffectModel *afterProcessEffectModel;
@property (retain, nonatomic) NSArray *loraRawImages;
@property (retain, nonatomic) NSArray *aigcMetaInfos;
@property (retain, nonatomic) NSArray *multiImage;
@property (retain, nonatomic) NSArray *multiVideo;
@property (retain, nonatomic) NSArray *multiCoverImage;
@property (copy, nonatomic) NSArray *originalRawImages;
@property (retain, nonatomic) NSArray *recommendTemplateIds;
@property (retain, nonatomic) NSArray *recommendTemplateArrays;
@property (retain, nonatomic) NSString *loraCoverImage;
@property (retain, nonatomic) NSString *loraResultImage;
@property (retain, nonatomic) NSString *loraLiveImage;
@property (retain, nonatomic) NSString *loraLiveVideo;
@property (retain, nonatomic) NSString *resourceType;
@property (retain, nonatomic) NSArray *textResultList;
@property (retain, nonatomic) NSString *effectExtra;
@property (nonatomic) BOOL isInNoticeCreativePath;
@property (nonatomic) BOOL isInAIGCLibraryPath;
@property (nonatomic) BOOL isMultiImageAssets;
@property (nonatomic) BOOL defaultLandingToLoraSuite;
@property (nonatomic) BOOL isNoticeHasVideo;
@property (nonatomic) BOOL isMultiUpdateTrack;
@property (nonatomic) BOOL needMultiSlotTemplate;
@property (retain, nonatomic) NSString *serverVideoResultLoaclPath;
@property (copy, nonatomic) NSString *aigcEnterMethod;
@property (nonatomic) BOOL isMultiLora;
@property (nonatomic) long long multiLoraReqSource;
@property (retain, nonatomic) NSArray *loraIdList;
@property (retain, nonatomic) AWEAIGCAIEditContextModel *aiEditContextModel;
@property (retain, nonatomic) NSString *modelId;
@property (retain, nonatomic) NSString *aigcCreateWay;
@property (retain, nonatomic) NSString *aiCreatePage;
@property (retain, nonatomic) NSNumber *defaultPropType;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

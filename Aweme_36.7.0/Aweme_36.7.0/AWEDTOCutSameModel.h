@class NSArray, NSString;

@interface AWEDTOCutSameModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *editTexts;
@property (nonatomic) long long templateType;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *cutSameId;
@property (copy, nonatomic) NSArray *srcVideoDataList;
@property (copy, nonatomic) NSString *concatFilePath;
@property (nonatomic) BOOL isH5;
@property (copy, nonatomic) NSString *openPlatformKey;
@property (copy, nonatomic) NSString *openPlatformShareId;
@property (nonatomic) BOOL isNleCutsame;
@property (copy, nonatomic) NSArray *challengeIdList;
@property (copy, nonatomic) NSArray *challengeNameList;
@property (nonatomic) double originVoiceVolume;
@property (nonatomic) long long templateSource;
@property (nonatomic) BOOL oneClickFilmingTemplateChanged;
@property (copy, nonatomic) NSString *oneClickFilmingMeta;
@property (nonatomic) BOOL isMusicBeatTemplate;
@property (copy, nonatomic) NSString *musicBeatTemplateSyncType;
@property (nonatomic) long long musicBeatTemplateSyncDuration;
@property (nonatomic) long long musicBeatTemplateMaterialCnt;
@property (nonatomic) long long musicBeatTemplateMaterialUse;
@property (nonatomic) long long musicBeatTemplateDurationUse;
@property (copy, nonatomic) NSString *cutSameLokiId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)srcVideoDataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

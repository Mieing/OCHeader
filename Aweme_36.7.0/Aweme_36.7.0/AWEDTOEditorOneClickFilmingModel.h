@class NSString, NSDictionary, NSArray;

@interface AWEDTOEditorOneClickFilmingModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateJson;
@property (nonatomic) BOOL hasAppliedTemplate;
@property (copy, nonatomic) NSString *templateRecId;
@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) long long templateType;
@property (copy, nonatomic) NSString *segmentInfo;
@property (copy, nonatomic) NSString *bringInTempalteId;
@property (copy, nonatomic) NSString *bringInTempalteMusicId;
@property (nonatomic) BOOL isBringInTemplate;
@property (copy, nonatomic) NSString *mvSource;
@property (copy, nonatomic) NSString *selectedTemplateIndex;
@property (copy, nonatomic) NSString *albumAutoFilmTemplateId;
@property (nonatomic) BOOL isAlbumAutoFilmPath;
@property (copy, nonatomic) NSString *templateAigcResult;
@property (nonatomic) double templateRatio;
@property (nonatomic) double albumAutoFilmFirstTemplateRatio;
@property (copy, nonatomic) NSString *applyingTemplateJson;
@property (nonatomic) long long oneClickFilmingScene;
@property (copy, nonatomic) NSString *sceneMvSource;
@property (copy, nonatomic) NSDictionary *followShootWithLivePhotoTrackDic;
@property (nonatomic) BOOL isUnifyInteraction;
@property (nonatomic) BOOL isAiTemplateFollowPath;
@property (nonatomic) long long requestStage;
@property (copy, nonatomic) NSString *aigcGeneratedMode;
@property (nonatomic) long long loadingType;
@property (copy, nonatomic) NSString *clickType;
@property (copy, nonatomic) NSArray *musicIdList;
@property (nonatomic) BOOL musicBeatsState;
@property (nonatomic) BOOL forceInsertMusicBeats;
@property (copy, nonatomic) NSString *transitionPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

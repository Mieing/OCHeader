@class NSString, NSArray, LVTemplateDataManager, NLEModel_OC;
@protocol ACCWorkspaceReader, ACCPublishRepository, ACCRepoDataContext, ACCMVTemplateModelProtocol;

@interface AWERepoCutSameModel : NSObject <AWERepositoryDraftProtocol, ACCCreationDataAccess, ACCRepoRegister, NSCopying, AWERepoCutSameData, ACCRepositoryContextDeprecated, ACCRepositoryTrackContextDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *cutSameEditedTexts;
@property (nonatomic) long long accTemplateType;
@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> templateModel;
@property (copy, nonatomic) NSString *cutSameMusicID;
@property (copy, nonatomic) NSString *cutSameId;
@property (copy, nonatomic) NSString *cutSameLokiId;
@property (copy, nonatomic) NSArray *cutSameChallengeIDs;
@property (copy, nonatomic) NSArray *cutSameChallengeNames;
@property (retain, nonatomic) NSArray *sourceMedia;
@property (nonatomic) long long templateSource;
@property (retain, nonatomic) NLEModel_OC *cutSameNLEModel;
@property (retain, nonatomic) NSArray *templatesArray;
@property (nonatomic) unsigned long long currentSelectIndex;
@property (retain, nonatomic) NSArray *currentTemplateAssets;
@property (retain, nonatomic) LVTemplateDataManager *dataManager;
@property (nonatomic) BOOL isNLECutSame;
@property (nonatomic) double cutsameOriginVoiceVolume;
@property (copy, nonatomic) NSString *originSmartMVMusicID;
@property (copy, nonatomic) NSString *oneClickFilmingImprID;
@property (nonatomic) BOOL oneClickFilmingTemplateChanged;
@property (copy, nonatomic) NSString *oneClickFilmingMeta;
@property (nonatomic) BOOL isMusicBeatTemplate;
@property (copy, nonatomic) NSString *musicBeatTemplateSyncType;
@property (nonatomic) long long musicBeatTemplateSyncDuration;
@property (nonatomic) long long musicBeatTemplateMaterialCnt;
@property (nonatomic) long long musicBeatTemplateMaterialUse;
@property (nonatomic) long long musicBeatTemplateDurationUse;
@property (weak, nonatomic) id<ACCRepoDataContext> dataContext;
@property (weak, nonatomic) id<ACCWorkspaceReader> workspaceReader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (BOOL)isCutSame;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (BOOL)isClassicalMV;
- (BOOL)isNewCutSameOrSmartFilming;
- (id)smartVideoAdditionParamsForPublishTrack;
- (BOOL)isSmartFilming;
- (id)acc_publishTrackEventParams:(id)a0;
- (id)preferVideoSize;
- (id)smartVideoAdditonParamsForTrack;
- (double)originRatio;
- (id)musicBeatTemplateTrackInfo;
- (BOOL)canTransferToCutSame;
- (id)p_contentTypeForSmartVideoWithType:(long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

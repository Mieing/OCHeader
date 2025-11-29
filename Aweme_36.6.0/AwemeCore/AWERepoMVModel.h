@class ACCMVAudioBeatTrackManager, NSString, NSArray, NSDictionary, ACCEditMVModel, NSNumber, NSMutableArray;
@protocol ACCWorkspaceReader, ACCMusicModelProtocol, ACCPublishRepository, ACCRepoDataContext;

@interface AWERepoMVModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepoRegister, ACCRepositoryRequestParamsDeprecated, ACCCreationDataAccess, NSCopying, AWERepoMVData, ACCRepositoryContextDeprecated, ACCRepositoryTrackContextDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<ACCMusicModelProtocol> mvMusic;
@property (nonatomic) long long mvTemplateType;
@property (copy, nonatomic) NSString *templateModelId;
@property (copy, nonatomic) NSString *templateModelTip;
@property (nonatomic) unsigned long long templateMaxMaterial;
@property (nonatomic) unsigned long long templateMinMaterial;
@property (copy, nonatomic) NSString *templateMusicId;
@property (copy, nonatomic) NSString *templateMusicFileName;
@property (copy, nonatomic) NSArray *templateMaterials;
@property (copy, nonatomic) NSString *mvChallengeName;
@property (nonatomic) BOOL enableOriginSoundInMV;
@property (copy, nonatomic) NSString *slideshowMVID;
@property (copy, nonatomic) NSDictionary *serverExecutedImageDict;
@property (nonatomic) long long mvTemplateCategoryID;
@property (copy, nonatomic) NSString *mvTemplateCategoryName;
@property (copy, nonatomic) NSNumber *mvLocation;
@property (copy, nonatomic) NSString *mvSource;
@property (copy, nonatomic) NSString *mvRequestId;
@property (retain, nonatomic) ACCEditMVModel *mvModel;
@property (copy, nonatomic) NSArray *mvChallengeNameArray;
@property (copy, nonatomic) NSString *mvID;
@property (copy, nonatomic) NSString *mvDetailType;
@property (retain, nonatomic) NSMutableArray *serverMaterials;
@property (retain, nonatomic) ACCMVAudioBeatTrackManager *audioBeatTrackManager;
@property (copy, nonatomic) NSString *templateMaterialsString;
@property (copy, nonatomic) NSString *oneKeyMVEnterfrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *mvEntrance;
@property (copy, nonatomic) NSArray *mvExtraInfo;
@property (copy, nonatomic) NSString *originMvId;
@property (nonatomic) BOOL isMediaTemplate;
@property (copy, nonatomic) NSString *videocutGroupId;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *photoTemplateSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCRepoDataContext> dataContext;
@property (weak, nonatomic) id<ACCWorkspaceReader> workspaceReader;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;
+ (unsigned long long)getTemplateSourceFromMVType:(long long)a0;
+ (id)mvRequestIDForTrackWithPublishModel:(id)a0;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_referExtraParams;
- (id)miscInfoWithPublishModel:(id)a0;
- (id)acc_publishTrackEventParams:(id)a0;
- (void)draftWillBeSavedWithID:(id)a0;
- (void)modelDidRetrievedFromDraftWithID:(id)a0;
- (id)miscInfoWithPublishModel:(id)a0 withCustomMVID:(id)a1;
- (id)p_providerString;
- (long long)getMVTypeFromTemplateSource:(unsigned long long)a0;
- (id)buildTemplateInfoWithPublishModel:(id)a0;
- (id)assembleActivityFeedJson;
- (id)assemblePineappleAnswerQuestion;
- (void)generaterServerMaterialInfoFromDraftFiles;
- (id)generaterServerMaterialInfoFromPath:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class AWEAIMemoriesEffectParamModel, NSString, AWEAIMemoriesMobModel, AWEAIMemoriesGenerateParamModel;
@protocol ACCMusicModelProtocol;

@interface AWERepoAIMemoriesModel : NSObject <ACCRepoModelDraftProtocol, ACCRepoRegister, ACCRepositoryRequestParamsDeprecated, ACCRepoAIMemoriesData>

@property (nonatomic) BOOL isAIMemories;
@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) long long taskStatus;
@property (nonatomic) BOOL isSavedFromAsync;
@property (copy, nonatomic) NSString *coverRelativePath;
@property (copy, nonatomic) NSString *collectionCoverAssetID;
@property (retain, nonatomic) id<ACCMusicModelProtocol> storyTemplateMusicModel;
@property (nonatomic) BOOL isAlbumCollectionDraftEnterEdit;
@property (nonatomic) BOOL isRequestRecommendMusic;
@property (copy, nonatomic) AWEAIMemoriesEffectParamModel *effectParamModel;
@property (copy, nonatomic) AWEAIMemoriesGenerateParamModel *generateParamModel;
@property (copy, nonatomic) AWEAIMemoriesMobModel *mobModel;
@property (nonatomic) BOOL isFromAiMemoryEntrance;
@property (copy, nonatomic) NSString *AIMemoryEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (id)acc_publishTrackEventParams:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

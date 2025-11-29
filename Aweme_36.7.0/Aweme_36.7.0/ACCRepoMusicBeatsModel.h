@class NSArray, NSDictionary, NSString;
@protocol ACCPublishRepository;

@interface ACCRepoMusicBeatsModel : NSObject <ACCRepoRegister, ACCRepoModelDraftProtocol, ACCRepoMusicBeatsData, ACCRepositoryContextDeprecated, ACCRepositoryRequestParamsDeprecated>

@property (nonatomic) long long musicBeatStatus;
@property (nonatomic) unsigned long long musicBeatsResult;
@property (nonatomic) BOOL openDefaultBeats;
@property (nonatomic) BOOL isPrefetchDefaultBeats;
@property (nonatomic) BOOL isMusicBeatsAvailable;
@property (nonatomic) BOOL isAutoBeats;
@property (copy, nonatomic) NSArray *beatsArray;
@property (copy, nonatomic) NSDictionary *projectTimeIntervalMap;
@property (copy, nonatomic) NSDictionary *projectMusicTimeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;
+ (long long)repo_scope;

- (id)acc_publishRequestParams:(id)a0;
- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (double)needMusicDuration;
- (double)fetchMusicStartTimeForCurrentProject;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

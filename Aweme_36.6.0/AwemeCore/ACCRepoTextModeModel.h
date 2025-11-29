@class NSString, ACCEditTextModeTemplateDataHelper, AWEStoryTextImageModel;
@protocol ACCWorkspaceReader, ACCPublishRepository, ACCRepoDataContext;

@interface ACCRepoTextModeModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepoRegister, ACCCreationDataAccess, NSCopying, ACCRepoTextModeData, ACCRepositoryRequestParamsDeprecated, ACCRepositoryContextDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ACCEditTextModeTemplateDataHelper *dataHelper;
@property (nonatomic) BOOL isTextMode;
@property (retain, nonatomic) AWEStoryTextImageModel *textModel;
@property (nonatomic) BOOL isModernTextMode;
@property (nonatomic) BOOL isModernTextInputMode;
@property (nonatomic) BOOL isSimpleModernTextEditMode;
@property (copy, nonatomic) NSString *textModeUseScene;
@property (nonatomic) BOOL didRealUpgrade;
@property (nonatomic) BOOL hasGeneratedTitle;
@property (nonatomic) BOOL useTextForPublish;
@property (nonatomic) double startTime;
@property (nonatomic) double startLandingEditorTime;
@property (nonatomic) long long firstRequestDuration;
@property (nonatomic) long long firstDownloadDuration;
@property (nonatomic) BOOL hasFirstRequestUseCache;
@property (nonatomic) BOOL hasFirstRequestReuse;
@property (nonatomic) BOOL hasLandingFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCRepoDataContext> dataContext;
@property (weak, nonatomic) id<ACCWorkspaceReader> workspaceReader;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (long long)getRandomTemplateNumber:(id)a0;
- (void)clearTextModeInfos;
- (void)modelDidRetrievedFromDraftWithID:(id)a0;
- (BOOL)isFromTextMode:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

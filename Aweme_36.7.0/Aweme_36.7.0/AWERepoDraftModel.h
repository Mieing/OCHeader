@class ACCDraftResourceAsyncRecoverHandler, NSString, AWEVideoPublishDraftTempProductModel, AWEVideoDraftModel, AWEVideoPublishViewModel, NSDate, NSNumber;
@protocol ACCPublishRepository;

@interface AWERepoDraftModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepoRegister, ACCRepoDraftData, NSCopying, ACCRepositoryRequestParamsDeprecated, ACCRepositoryTrackContextDeprecated, ACCRepositoryContextDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEVideoDraftModel *originalDraft;
@property (retain, nonatomic) AWEVideoPublishViewModel *originalModel;
@property (copy, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSString *draftPath;
@property (nonatomic) BOOL isBackUp;
@property (readonly, nonatomic) BOOL isDraft;
@property (retain, nonatomic) AWEVideoPublishDraftTempProductModel *draftTempProduct;
@property (nonatomic) long long editFrequency;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *copyedDraftID;
@property (retain, nonatomic) NSDate *saveDate;
@property (nonatomic) BOOL isReceived;
@property (nonatomic) BOOL isFromAlbumDraft;
@property (retain, nonatomic) NSNumber *adminDraftId;
@property (nonatomic) long long draftSavePolicy;
@property (nonatomic) long long postPageFrequency;
@property (nonatomic) long long draftType;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *firstSavedAppVersion;
@property (nonatomic) BOOL isUserAction;
@property (readonly, nonatomic) ACCDraftResourceAsyncRecoverHandler *recoverHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;
+ (id)safe_generateDraftID;

- (id)draftFolder;
- (BOOL)isDraftOrBackup;
- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_referExtraParams;
- (id)fileMonitor_whiteList;
- (id)fileMonitor_blockList;
- (void)safe_setDraftID:(id)a0;
- (void)draftWillBeSavedWithID:(id)a0;
- (void)setResourceRecoverHandler:(id)a0;
- (id)tagForDraftFromBackEdit;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

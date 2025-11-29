@class NSString, NSArray, NSMutableArray, AWEPictureToVideoInfo;
@protocol ACCWorkspaceReader, ACCPublishRepository, ACCRepoDataContext;

@interface AWERecordInformationRepoModel : NSObject <ACCRepositoryRequestParamsDeprecated, AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCCreationDataAccess, NSCopying, ACCRepositoryContextDeprecated, ACCRepoRecordInformationData, ACCRepoRegister>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *recordFragmentInfo;
@property (readonly, nonatomic) NSMutableArray *fragmentInfo;
@property (retain, nonatomic) AWEPictureToVideoInfo *pictureToVideoInfo;
@property (nonatomic) BOOL isCommerceDataInToolsLine;
@property (nonatomic) long long delay;
@property (nonatomic) double micVolumePeak;
@property (nonatomic) double micVolumeLoudness;
@property (copy, nonatomic) NSArray *toolBarAllowList;
@property (copy, nonatomic) NSArray *toolBarBlockList;
@property (nonatomic) BOOL shouldCheckIgnoreUploadProp;
@property (nonatomic) BOOL macroMode;
@property (copy, nonatomic) NSString *inspirationTabName;
@property (weak, nonatomic) id<ACCRepoDataContext> dataContext;
@property (weak, nonatomic) id<ACCWorkspaceReader> workspaceReader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (id)stickerTextArray;
- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)beautifyTrackInfoDic;
- (id)stickerTextString;
- (BOOL)shouldForbidCommerce;
- (id)originalFrameNamesArray;
- (id)p_providerString:(id)a0;
- (id)textExportHandlers:(id)a0;
- (id)p_jsonStringEncoded:(id)a0 error:(id)a1;
- (void)trackForTextSticker:(BOOL)a0 error:(id)a1;
- (BOOL)shouldForbidCommerce:(id)a0;
- (void)updateVideoFragmentInfo;
- (BOOL)isStoryAllowed;
- (BOOL)isCommerceProp;
- (BOOL)isCommerceStickerOrMV;
- (id)delayRange;
- (void)updateFragmentInfo:(id)a0;
- (id)saveImage:(id)a0 index:(long long)a1 draftFolder:(id)a2;
- (id)saveImage:(id)a0 index:(long long)a1 draftFolder:(id)a2;
- (void)draftWillBeSavedWithID:(id)a0;
- (void)modelDidRetrievedFromDraftWithID:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasStickers;

@end

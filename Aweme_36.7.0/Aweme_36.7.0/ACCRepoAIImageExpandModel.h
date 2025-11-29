@class NSString;
@protocol ACCWorkspaceReader, ACCRepoDataContext;

@interface ACCRepoAIImageExpandModel : NSObject <ACCRepoDataDiff, ACCRepoRegister, ACCCreationDataAccess, ACCRepoModelDraftProtocol, NSCopying, ACCRepoAIExpandData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isOrigImageExpanded;
@property (nonatomic, getter=isAIExpanded) BOOL aiExpanded;
@property (nonatomic) BOOL isBackupProjectsOrigImageExpanded;
@property (copy, nonatomic) NSString *origImageFilePath;
@property (copy, nonatomic) NSString *origCompressedImageFilePath;
@property (nonatomic) struct CGSize { double width; double height; } origImageSize;
@property (nonatomic) double origImageScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCRepoDataContext> dataContext;
@property (weak, nonatomic) id<ACCWorkspaceReader> workspaceReader;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;

- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (id)editDiffs;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class NSString, ACCPicTemplateModel, NSArray;
@protocol ACCPublishRepository;

@interface ACCRepoNoteImageInstanceModel : NSObject <ACCRepoDataDiff, ACCRepoRegister, ACCRepoModelDraftProtocol, NSCopying, ACCRepositoryContextDeprecated, AWERepoEditPictureTemplateData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ACCPicTemplateModel *picTemplateModel;
@property (copy, nonatomic) NSString *bringInTemplateId;
@property (nonatomic) BOOL isFromMultiSlotTemplate;
@property (copy, nonatomic) NSArray *templateImagesCache;
@property (copy, nonatomic) NSArray *templateAIGCResult;
@property (retain, nonatomic) NSArray *slotInfoForMultiTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;

- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (id)editDiffs;
- (void)updateAIGCResult:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

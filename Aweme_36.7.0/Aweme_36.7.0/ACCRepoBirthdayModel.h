@class NSString, NSArray, NSData, ACCBirthdayTemplateModel, AWEUserModel;
@protocol ACCPublishRepository;

@interface ACCRepoBirthdayModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepositoryRequestParamsDeprecated, ACCRepositoryContextDeprecated, ACCRepoBirthdayData, ACCRepoRegister>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSData *birthdayTemplatesJson;
@property (readonly, nonatomic) BOOL isBirthdayPost;
@property (copy, nonatomic) NSArray *birthdayTemplates;
@property (readonly, nonatomic) ACCBirthdayTemplateModel *current;
@property (readonly, nonatomic) ACCBirthdayTemplateModel *next;
@property (retain, nonatomic) AWEUserModel *atUser;
@property (nonatomic) BOOL isIMBirthdayPost;
@property (nonatomic) BOOL isDraftEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

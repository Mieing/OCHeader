@class NSArray, NSString;

@interface AWERepoTemplateInfoModel : NSObject <AWERepositoryDraftProtocol, ACCRepoRegister, ACCRepoTemplateInfoData>

@property (retain, nonatomic) NSArray *allTemplateAssets;
@property (retain, nonatomic) NSArray *segInfoArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void)p_assembleSegInfos:(id)a0 repoCutSame:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

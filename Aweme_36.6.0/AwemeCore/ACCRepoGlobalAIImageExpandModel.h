@class NSString;

@interface ACCRepoGlobalAIImageExpandModel : NSObject <ACCRepoRegister, ACCRepoModelDraftProtocol, NSCopying, ACCRepoGlobalExpandData>

@property (nonatomic) BOOL aiExpandHashtagAdded;
@property (nonatomic) BOOL hasClickAIExpandBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;

- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class AWEDTOInspirationFollowModel, NSString;

@interface ACCRepoInspirationFollowModel : NSObject <ACCRepoModelDraftProtocol, NSCopying, ACCRepoRegister, ACCRepoInspirationFollowData>

@property (retain, nonatomic) AWEDTOInspirationFollowModel *DTOModel;
@property (copy, nonatomic) NSString *afflatusId;
@property (copy, nonatomic) NSString *afflatusAisupportResult;
@property (nonatomic) BOOL isAisupportAuto;
@property (nonatomic) BOOL isAfflatusAisupport;
@property (copy, nonatomic) NSString *autoShootingDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;
+ (long long)repo_scope;
+ (id)JSONKeyPathsByPropertyKey;

- (id)trackParams;
- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (void)draft_updateWithDTOModel:(id)a0 draftModel:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

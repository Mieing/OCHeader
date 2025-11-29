@class AWEDTOPrepareContextModel, NSString;

@interface ACCRepoPrepareLiveContextModel : NSObject <ACCRepoRegister, ACCRepoModelDraftProtocol, NSCopying, ACCRepoPrepareLiveContextData>

@property (retain, nonatomic) AWEDTOPrepareContextModel *DTOModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;
+ (long long)repo_scope;

- (double)shootStartTime;
- (void)setShootStartTime:(double)a0;
- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

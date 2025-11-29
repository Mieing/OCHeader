@class NSArray, NSString;

@interface ACCRepoAIEditorConflictsModel : NSObject <ACCRepoModelDraftProtocol, ACCRepoRegister, NSCopying, ACCRepoAIConflictsInstanceData>

@property (copy, nonatomic) NSArray *aiConflictNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;

@end

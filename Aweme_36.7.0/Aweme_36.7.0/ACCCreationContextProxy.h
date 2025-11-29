@protocol ACCWorkspaceReader, ACCUseCaseContext, ACCRepoDataContext;

@interface ACCCreationContextProxy : NSObject

@property (readonly, nonatomic) id<ACCRepoDataContext, ACCUseCaseContext> dataContext;
@property (readonly, nonatomic) id<ACCWorkspaceReader> workspaceReader;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end

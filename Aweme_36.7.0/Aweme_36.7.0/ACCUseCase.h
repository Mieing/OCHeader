@protocol ACCWorkspaceReader, ACCUseCaseContext, ACCRepoDataContext;

@interface ACCUseCase : NSObject

@property (readonly, weak, nonatomic) id<ACCRepoDataContext, ACCUseCaseContext> dataContext;
@property (readonly, weak, nonatomic) id<ACCWorkspaceReader> workspaceReader;

- (void)setupWithProxy:(id)a0;
- (void).cxx_destruct;

@end

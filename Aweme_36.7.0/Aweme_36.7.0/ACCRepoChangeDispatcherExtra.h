@class ACCRepositoryProject, Protocol;

@interface ACCRepoChangeDispatcherExtra : NSObject

@property (nonatomic) BOOL isInstanceChange;
@property (retain, nonatomic) Protocol *proto;
@property (weak, nonatomic) ACCRepositoryProject *project;

- (BOOL)shouldDispatch;
- (void).cxx_destruct;

@end

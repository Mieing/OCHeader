@class AWEVideoDraftTracer, NSString, ACCRepositoryWorkspace;

@interface AWEVideoDraftRetrieveContext : NSObject

@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isEdit;
@property (nonatomic) BOOL skipLoadVideo;
@property (nonatomic) BOOL skipLoadResource;
@property (nonatomic) BOOL isBackupProject;
@property (retain, nonatomic) AWEVideoDraftTracer *tracer;
@property (nonatomic) BOOL mergeDuringEdit;
@property (retain, nonatomic) NSString *projectUUID;
@property (weak, nonatomic) ACCRepositoryWorkspace *workspace;

- (void).cxx_destruct;
- (id)init;

@end

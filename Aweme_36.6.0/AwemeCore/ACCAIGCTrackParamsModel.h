@class NSString;
@protocol ACCWorkspaceReader, ACCAIGCBusinessTrackData, ACCAIGCCoreTrackData, ACCAIGCUploadTrackerProtocol, ACCRepoDataContext;

@interface ACCAIGCTrackParamsModel : NSObject <ACCRepoRegister, ACCRepoModelDraftProtocol, ACCAIGCTrackParamsProtocol, NSCopying>

@property (retain, nonatomic) id<ACCAIGCCoreTrackData> coreTrackModel;
@property (retain, nonatomic) id<ACCAIGCBusinessTrackData> businessTrackModel;
@property (retain, nonatomic) id<ACCAIGCUploadTrackerProtocol> uploadTrackModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCRepoDataContext> dataContext;
@property (weak, nonatomic) id<ACCWorkspaceReader> workspaceReader;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;

- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (id)trackParamsUpToAIProcess;
- (id)trackParamsUpToAIProcessWith:(id)a0;
- (id)buildDtoModel;
- (void)recoverTrackModelFromDto:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

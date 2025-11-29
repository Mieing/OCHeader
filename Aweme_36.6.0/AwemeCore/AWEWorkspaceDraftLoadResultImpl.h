@class NSString, NSError, NSMutableArray, AWEVideoPublishViewModel;

@interface AWEWorkspaceDraftLoadResultImpl : NSObject <AWEWorkspaceDraftLoadResult>

@property (retain, nonatomic) NSMutableArray *nonfatalErrors;
@property (retain, nonatomic) NSError *fatalError;
@property (retain, nonatomic) AWEVideoPublishViewModel *workspace;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNonfatalErrorIfNeeded:(id)a0;
- (void).cxx_destruct;

@end

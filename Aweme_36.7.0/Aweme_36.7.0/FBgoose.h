@class NSArray, NSMutableDictionary, AWECFMuniments, NSError, NSMutableArray, NSString;

@interface FBgoose : NSObject <AWECFDaffodil>

@property (retain, nonatomic) NSMutableDictionary *moduleTaskMapper;
@property (retain, nonatomic) AWECFMuniments *moduleListTask;
@property (readonly, nonatomic) NSArray *moduleTasks;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *retryTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)taskForModuleModel:(id)a0;
- (void)bd_automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers:(id)a0 bd_shouldAutomaticallyForwardRotationMethods:(id)a1;
- (void)bd_willMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;

@end

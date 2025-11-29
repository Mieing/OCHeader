@class PuzzleContext, NSString;
@protocol IESHYHybridViewProtocol;

@interface PuzzleLifeCycleHelper : NSObject <IESHYHybridViewLifecycleProtocol>

@property (weak, nonatomic) id<IESHYHybridViewProtocol> kitView;
@property (readonly, nonatomic) PuzzleContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerLifeCycleInterceptor:(id)a0;
+ (void)unregiserLifeCycleInterceptor:(id)a0;
+ (id)broadcaster;

- (void)viewDidStartLoading;
- (void)viewDidFirstScreen;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)viewWillCreated:(id)a0;
- (void)viewDidCreated:(id)a0;
- (void)viewDidHitCache:(id)a0 cacheType:(unsigned long long)a1;
- (BOOL)viewShouldStartLoadWithRequest:(id)a0;
- (void)viewWillDealloc:(id)a0;
- (void).cxx_destruct;

@end

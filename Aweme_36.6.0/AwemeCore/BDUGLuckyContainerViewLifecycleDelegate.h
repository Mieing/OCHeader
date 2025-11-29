@class NSString, NSHashTable;

@interface BDUGLuckyContainerViewLifecycleDelegate : NSObject <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) NSHashTable *views;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerViewDidAppear:(id)a0;
- (void)containerViewDidDisappear:(id)a0;
- (void)__appDidBecomeActive:(id)a0;
- (void)__appWillResignActive:(id)a0;
- (void)__addLoadingViewIfNeededWithContainer:(id)a0 context:(id)a1;
- (BOOL)__appIsInBackground;
- (id)__buildLoadingViewWithContext:(id)a0;
- (void)containerViewShouldStartLoad:(id)a0 enableLoadingView:(BOOL)a1 enableLoadFailedView:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

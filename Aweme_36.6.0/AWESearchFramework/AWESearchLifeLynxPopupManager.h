@class NSString;

@interface AWESearchLifeLynxPopupManager : NSObject <BDXContainerLifecycleProtocol, AWESearchLifeLynxPopupProtocol>

@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ statusBlock;
@property (copy, nonatomic) id /* block */ shouldShowBlock;

+ (id)popIDWithSchema:(id)a0;
+ (id)sharedInstance;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerWillDestory:(id)a0;
- (void)containerDidPageReady:(id)a0 sourceParam:(id)a1;
- (void)containerOnShow:(id)a0 sourceParam:(id)a1;
- (void)showPopupWithSchema:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)showPopupWithSchema:(id)a0 params:(id)a1 popID:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)reset;

@end

@class NSString, BDUGLuckyDogResourceSchemaPopupLockGuard;

@interface BDUGLuckyDogResourceSchemaManager : NSObject <BDUGLuckyRouterIntercepterProtocol>

@property (weak, nonatomic) BDUGLuckyDogResourceSchemaPopupLockGuard *popupQueueLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preStartupUnionSchemaModule;
+ (long long)intercepterType;
+ (id)sharedInstance;

- (BOOL)canHandleUrl:(id)a0;
- (id)handleUrl:(id)a0;
- (BOOL)isMustBeAwakened;
- (void)__startup;
- (void)__handleResourceActionWithURLString:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)__doResourceActionWithURLString:(id)a0 resourceParams:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end

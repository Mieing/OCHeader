@class NSString;

@interface BDUGLuckyCatRouterLynxIntercepter : NSObject <BDUGLuckyRouterIntercepterProtocol>

@property (copy, nonatomic) NSString *fallbackLaunchMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)intercepterType;
+ (id)sharedInstance;

- (id)createViewWithContext:(id)a0;
- (BOOL)canHandleUrl:(id)a0;
- (id)handleUrl:(id)a0;
- (BOOL)isMustBeAwakened;
- (id)createVCWithContext:(id)a0;
- (BOOL)_isNewContainerWithSchema:(id)a0;
- (BOOL)enableProcessSamePage;
- (void)_realHandleUrl:(id)a0 isNewContainer:(BOOL)a1 extraParams:(id)a2;
- (id)targetLynxVCWithUrl:(id)a0 fromVCStack:(id)a1;
- (id)survivedVCsWithtargetLynxVC:(id)a0 VCStack:(id)a1;
- (id)launchModeWithUrl:(id)a0 default:(id)a1;
- (void)removeTargetLynx:(id)a0 survivedVCs:(id)a1 launchMode:(id)a2 topVC:(id)a3 currentNav:(id)a4;
- (id)__buildParamWithContext:(id)a0 extraParams:(id)a1;
- (id)_pathForUrlSchema:(id)a0;
- (void)_realHandleUrl:(id)a0;
- (id)launchModeWithUrl:(id)a0;
- (void).cxx_destruct;

@end

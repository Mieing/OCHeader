@class NSString;

@interface WCFinderLimitedBusinessMgr : NSObject <WCFinderAntiAddictMgrExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)getFinderExitAddictBlockBy:(id)a0;
+ (BOOL)checkShouldFaceVerifyScene:(long long)a0 isFinderIdentity:(BOOL)a1 navigationController:(id)a2 verifyContinueBlock:(id /* block */)a3;
+ (void)showFaceVerifyTips:(long long)a0 nav:(id)a1 faceVerifyURL:(id)a2;
+ (id)getFaceVerifyAlertTitleWithScene:(long long)a0;
+ (id)getFaceVerifyCreateTitle:(long long)a0;

- (id)init;
- (void)addObserverForForegroundNotification;
- (void)dealloc;
- (void)removeObserverForForegroundNotification;
- (void)onTimelineViewEnterForeground:(id)a0;
- (void)onTimelineViewEnterBackground:(id)a0;
- (BOOL)triggerAntiAddictCheckFromVC:(id)a0 scene:(unsigned long long)a1;
- (void)antiCheckViewWillAppear:(BOOL)a0 scene:(unsigned long long)a1;
- (void)antiCheckViewDidAppear:(BOOL)a0 scene:(unsigned long long)a1;

@end

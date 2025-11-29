@class NSString;

@interface AWELuckyPreloadPopupManager : HTSService <AWELuckyPreloadPopupService>

@property (nonatomic) BOOL hasTryShowPopup;
@property (nonatomic) BOOL hasShownPopupFromTaskPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)tryProcessIncentivePopupPreloadData:(id)a0;
- (void)setupNotification;
- (void)handleUGLynxPageDidAppearNotification:(id)a0;
- (void)subscribeFEEvent;
- (BOOL)enableTaskPageSignPopupPreload;
- (void)preloadPopupDataWithSchema:(id)a0 popupPath:(id)a1 expireTime:(double)a2 taskID:(id)a3;
- (void)openSignInPopupFromTaskPage;
- (void)tryOpenPreloadPopupIfNeed;
- (BOOL)isDeliverLuckyCatTaskPage:(id)a0;
- (void)requestPopupPathWithParams:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

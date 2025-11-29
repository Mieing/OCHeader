@class CSJASlotContext, NSMutableDictionary, CSJMaterialMeta;
@protocol CSJAd;

@interface CSJAdDeepLinkActionManager : NSObject

@property (nonatomic) BOOL hasEnterBackground;
@property (nonatomic) long long deeplinkJumpTime;
@property (retain, nonatomic) NSMutableDictionary *trackInfoDic;
@property (retain, nonatomic) CSJMaterialMeta<CSJAd> *materialMeta;
@property (weak, nonatomic) CSJMaterialMeta<CSJAd> *doubleOpenDeepLinkMeta;
@property (weak, nonatomic) CSJASlotContext *doubleOpenDeepLinkContext;
@property (nonatomic) double doubleOpenDeepLinkTime;

+ (id)sharedManager;

- (void)appDidBecomeActiveNotification;
- (void)appDidEnterBackgroundNotification;
- (BOOL)pbu_handleWCMiniappActionWithModel:(id)a0 context:(id)a1 completionBlock:(id /* block */)a2;
- (void)pbu_handleLinksActionWithModel:(id)a0 context:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)canPresentPlayableLandingPageWithContext:(id)a0 meta:(id)a1;
- (void)pbu_openPlayableVCWithModel:(id)a0 context:(id)a1;
- (BOOL)pbu_handleActionWithModel:(id)a0 context:(id)a1;
- (void)pbu_report_ulink_resultWithModel:(id)a0 context:(id)a1;
- (void)pbu_handleDplActionWithModel:(id)a0 context:(id)a1 completionBlock:(id /* block */)a2;
- (id)wcMiniappTypeWithMeta:(id)a0 success:(BOOL)a1;
- (void)pbu_doubleDeepLinkWithModel:(id)a0 context:(id)a1;
- (void)pbu_report_dpl_resultWithModel:(id)a0 context:(id)a1 adExtraDataDic:(id)a2;
- (void)pbu_handleFallbackActionWithModel:(id)a0 context:(id)a1 completionBlock:(id /* block */)a2;
- (void)pbu_openWebVCWithFallbackURL:(id)a0 model:(id)a1 context:(id)a2;
- (void)pbu_report_dpl_TrackWithModel:(id)a0 context:(id)a1 adExtraDataDic:(id)a2;
- (void)checkAppStatusWithTimeDiff:(double)a0;
- (void)showAlertWithMeta:(id)a0 context:(id)a1;
- (void)clearHistoryDoubleOpen;
- (void)handleActionWithModel:(id)a0 context:(id)a1 completionBlock:(id /* block */)a2;
- (id)realPresentingViewControllerFromViewController:(id)a0;
- (id)pbu_urlWithString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)currentTime;
- (void)dealloc;

@end

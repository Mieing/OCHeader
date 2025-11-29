@interface AWEECOMIMTrackerServiceUtil : NSObject

+ (void)trackEvent:(id)a0 params:(id)a1;
+ (id)getBTMPageInfo:(id)a0;
+ (id)createJumpSourceBtmTokenWithBtm:(id)a0 host:(id)a1 bcm:(id)a2;
+ (BOOL)registerBtmPage:(id)a0 pageBtm:(id)a1 sourceBtmToken:(id)a2;
+ (id)createReportParamsWithBtm:(id)a0 host:(id)a1;
+ (id)realEccsSchemeInfoWithEccsSchemeInfoString:(id)a0;
+ (id)routerSchemeWithSourceBtmToken:(id)a0 scheme:(id)a1;
+ (void)addEndToEndDurationParamsToHttpParams:(id)a0;
+ (BOOL)setBcmPageParams:(id)a0 host:(id)a1;

@end

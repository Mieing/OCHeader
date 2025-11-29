@interface AWEAnnieXRiskReport : AWEShareBaseChannel

+ (id)captureScreenShot;
+ (id)obtainReportPageUrl;
+ (id)asyncQueue;

- (void)showToast;
- (id)shareImage;
- (void)openRiskReportPage:(id)a0 reportRiskUrl:(id)a1 reportParams:(id)a2;
- (void)captureScreenShotAndReport:(id)a0 reportParams:(id)a1;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;

@end

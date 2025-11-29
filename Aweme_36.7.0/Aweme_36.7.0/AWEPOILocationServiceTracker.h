@class NSString;
@protocol BDPrivacyCertProtocol;

@interface AWEPOILocationServiceTracker : NSObject

@property (retain, nonatomic) id<BDPrivacyCertProtocol> cert;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *extraReportParams;
@property (copy, nonatomic) NSString *guidePicType;
@property (copy, nonatomic) NSString *expectedGuidePicType;
@property (copy, nonatomic) NSString *traceId;

+ (id)sharedManager;

- (void)updateTraceId:(id)a0;
- (void)updateWithBDCert:(id)a0 enterFrom:(id)a1 extraReportParams:(id)a2;
- (void)trackInAppServiceAlertClick:(BOOL)a0;
- (void)updateWithPicType:(id)a0;
- (void)trackInAppServeShow;
- (void)trackInAppAuthorizationAlertClick:(BOOL)a0;
- (void)trackInAppPermissionShow;
- (void)trackInAppBottomSheetShow:(BOOL)a0;
- (void)trackInAppBottomSheetStatus:(BOOL)a0 guideViewType:(id)a1 allow:(BOOL)a2;
- (void)trackInAppServiceAlertStatus:(BOOL)a0;
- (void)trackLocationBarAuthorizationAlertStatus:(BOOL)a0 guideViewType:(id)a1;
- (void)trackInAppAuthorizationAlertStatus:(BOOL)a0;
- (void)trackSysPopUpShow;
- (void)trackSysPopupClick:(BOOL)a0;
- (void)trackPoiLocationServiceFinishWithAllow:(BOOL)a0 error:(id)a1;
- (void)updateWithExpectedPicType:(id)a0;
- (void)trackInAppBottomSheetClick:(BOOL)a0 condition:(id)a1;
- (id)generateParamsWithExtraParams:(id)a0;
- (void)trackBottomBarFloatGuideBarShow;
- (void)trackBottomBarFloatGuideBarClick:(BOOL)a0;
- (void)trackEmbeddedTipBarShow;
- (void)trackEmbeddedTipBarClick:(BOOL)a0;
- (void).cxx_destruct;

@end

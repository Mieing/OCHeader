@class NSString;
@protocol IESLLPrivacyCertProtocol;

@interface IESLocalLifeLocationBizService : HTSService <IESLocalLifeLocationBizService>

@property (nonatomic) BOOL requesting;
@property (nonatomic) BOOL isBottomBarShowing;
@property (nonatomic) BOOL isBecomeActiveFromLocationPermission;
@property (nonatomic) BOOL isBecomeActiveFromLocationAuthorization;
@property (retain, nonatomic) id<IESLLPrivacyCertProtocol> cert;
@property (copy, nonatomic) NSString *extraReportParams;
@property (copy, nonatomic) id /* block */ authorizeBlk;
@property (copy, nonatomic) NSString *guideViewType;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCurrentLocationWithBDCert:(id)a0 encodeType:(unsigned long long)a1;
+ (id)transformLocationWithCLLocation:(id)a0 encodeType:(unsigned long long)a1;
+ (void)requestCurrentLocationWithBDCert:(id)a0 completion:(id /* block */)a1;
+ (unsigned long long)getLocationAccessStatus;
+ (BOOL)isSystemLocationAlertShowned;
+ (BOOL)hasPermission;

- (void)requestPermissionWithBDCert:(id)a0 completion:(id /* block */)a1;
- (long long)getCurrentLocationAuthorizationAccuracyStatus;
- (id)requestBottomBarLocationPermissionWithBDCert:(id)a0 enterFrom:(id)a1 contentText:(id)a2 buttonText:(id)a3 addOnView:(id)a4 extraReportParams:(id)a5 authorizeBlk:(id /* block */)a6;
- (id)p_showBottomBarAuthorizationRequestAlertWithTitle:(id)a0 buttonText:(id)a1 addOnView:(id)a2;
- (id)p_errorWithErrorCode:(long long)a0;
- (void)p_finishLocationServiceWithAllow:(BOOL)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)openSettings;
- (void)p_cleanup;

@end

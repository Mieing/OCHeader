@class AWECodeGenDouyinContentPayChargePermissionResponse, NSDictionary, AWEUILoadingView;
@protocol ACCEditServiceProtocol;

@interface ACCPaymentComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) AWECodeGenDouyinContentPayChargePermissionResponse *singlePaidPermissionModel;
@property (retain, nonatomic) AWECodeGenDouyinContentPayChargePermissionResponse *vipPaidPermissionModel;
@property (copy, nonatomic) NSDictionary *paymentConfigHistoryInfo;
@property (nonatomic) BOOL isDenyGoToPage;
@property (nonatomic) BOOL isOpening;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL hasVIPVideoPrivilege;
@property (nonatomic) BOOL shouldRefreshPermission;
@property (nonatomic) BOOL isMember;
@property (nonatomic) long long vipVideoMonthPrice;

- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)gotoPaymentPage:(id)a0;
- (void)fetchPermissionInfoWithCompletion:(id /* block */)a0 hasVIPVideoPrivilege:(BOOL)a1;
- (void)fetchVIPVideoInfo;
- (void)fetchPaymentConfigHistoryInfoWithCompletion:(id /* block */)a0;
- (void)gotoConfigPaymentPageWithPermissionModel:(id)a0;
- (BOOL)openPaymentQualificationInspectionWithPermissionModel:(id)a0;
- (void)showMinPaymentVideoDurationPopView:(long long)a0;
- (void)savePaymentConfigHistoryInfo;
- (void)showPaymentQualificationInspectionVCWithPermissionModel:(id)a0;
- (void).cxx_destruct;
- (double)totalDuration;
- (void)showLoadingView;
- (void)hideLoadingView;

@end

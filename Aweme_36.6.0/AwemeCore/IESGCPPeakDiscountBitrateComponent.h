@class NSDictionary, IESGCPPeakStatusService, NSString;

@interface IESGCPPeakDiscountBitrateComponent : IESGCPCGInstanceBaseComponent <IESGCPCGLaunchProcessActions, IESGCPPeakDiscountBitrateRouter>

@property (retain, nonatomic) IESGCPPeakStatusService *peakStatusService;
@property (copy, nonatomic) NSDictionary *discountConfig;
@property (nonatomic) double discount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)onInitProcessResult:(BOOL)a0 code:(long long)a1 errMsg:(id)a2 extraInfo:(id)a3;
- (BOOL)isPeakTime;
- (double)currentDiscount;
- (void)parseDiscount;
- (void).cxx_destruct;
- (id)init;

@end

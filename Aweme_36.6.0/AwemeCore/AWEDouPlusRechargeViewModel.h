@class NSArray, NSDictionary, AWEDouPlusChargeOptionsResponseModel, AWEDouPlusIAPProductModel;

@interface AWEDouPlusRechargeViewModel : NSObject

@property (retain, nonatomic) AWEDouPlusChargeOptionsResponseModel *chargeOptionsModel;
@property (retain, nonatomic) NSArray *couponModelList;
@property (copy, nonatomic) NSDictionary *trackCommonParams;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSArray *productInfos;
@property (copy, nonatomic) id /* block */ clickDouPlusIAPProductBlock;
@property (retain, nonatomic) AWEDouPlusIAPProductModel *selectedProductModel;

- (id)initWithParamDict:(id)a0;
- (void)fetchDouplusChargeOptions;
- (void)trackerClickChargeButton;
- (void)monitorPayStatusWithPaySuccess:(BOOL)a0 payNumberString:(id)a1 error:(id)a2;
- (void)douPlusChargeWithProductModel:(id)a0 couponModel:(id)a1 completeBlock:(id /* block */)a2;
- (void)postStatusNotificationWithParams:(id)a0 douPlusWebVCList:(id)a1;
- (void)trackerDouPlusPayStatus:(BOOL)a0 payNumberString:(id)a1;
- (void)prefetchProductInfo;
- (id)productInfoWithIAPID:(id)a0;
- (void).cxx_destruct;

@end

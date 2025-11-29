@class NSString, AWEIMFansGroupCouponModel, AWEIMCommerceCouponTrackViewModel;

@interface AWEIMCommerceCouponViewModel : NSObject <AWEIMCommerceCouponUpdateProtocol>

@property (copy, nonatomic) NSString *processTitle;
@property (retain, nonatomic) AWEIMCommerceCouponTrackViewModel *track;
@property (nonatomic) BOOL clickEnable;
@property (weak, nonatomic) AWEIMFansGroupCouponModel *couponModel;
@property (readonly, nonatomic) BOOL procesEnable;
@property (readonly, nonatomic) BOOL priceIconEnabel;
@property (readonly, copy, nonatomic) NSString *iconUrl;
@property (readonly, copy, nonatomic) NSString *price;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) id /* block */ refreshExtBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)arrayToJsonString:(id)a0;
- (void)asyncUpdateCouponStatusWithCompletion:(id /* block */)a0;
- (void)trackViewDisplay;
- (BOOL)couponEnable;
- (void)refreshCoupon:(long long)a0 status:(unsigned long long)a1 showExpireTime:(id)a2;
- (void)toUseCoupon;
- (void)alertToast;
- (void)handleTapEvent;
- (void)updateWithUpdateModel:(id)a0;
- (id)commonToast;
- (id)getParamWithCouponModel:(id)a0;
- (void)updateWithResultInfoModel:(id)a0;
- (id)mapStatusToProcessTitle;
- (id)discountWithDecimalPointIfNecessary:(id)a0;
- (id)creditsWithDecimalPointIfNecessary:(id)a0;
- (void)routerToCommerce;
- (void).cxx_destruct;
- (void)apply:(id /* block */)a0;
- (id)init;
- (void)dealloc;

@end

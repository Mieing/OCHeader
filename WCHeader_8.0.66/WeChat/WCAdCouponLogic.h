@class WCAdConfirmHalfScreenBaseView, NSString, WCAdvertiseInfo, WCCanvasDynamicDataLoader, WCAdCouponInfo;
@protocol WCAdCouponLogicDelegate;

@interface WCAdCouponLogic : WCAdvertiseOperationLogicBase <WCAdConfirmHalfScreenBaseViewDelegate, WCCanvasDynamicDataLoaderDelegate>

@property (retain, nonatomic) WCAdCouponInfo *adCouponInfo;
@property (retain, nonatomic) WCAdConfirmHalfScreenBaseView *halfScreenView;
@property (retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader;
@property (retain, nonatomic) WCAdvertiseInfo *adData;
@property (retain, nonatomic) NSString *snsId;
@property (weak, nonatomic) id<WCAdCouponLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCouponInfo:(id)a0 adAdData:(id)a1 andSnsId:(id)a2;
- (void)start;
- (void)onConfirmViewConfirmButtonClickWithConfirmInfo:(id)a0;
- (void)showLoadingView;
- (void)hideLoadingView;
- (id)fetchMMViewController;
- (void)onGetCouponWithResult:(long long)a0 errMsg:(id)a1;
- (void).cxx_destruct;

@end

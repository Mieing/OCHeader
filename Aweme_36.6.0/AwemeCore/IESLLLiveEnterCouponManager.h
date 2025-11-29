@class NSArray, NSDictionary, NSString, IESLLLiveMessageSubscriber, IESLLLiveXBridgeEventSubscriber;
@protocol IESLLLiveEnterCouponDelegate;

@interface IESLLLiveEnterCouponManager : NSObject <IESLLLiveEnterCouponService>

@property (retain, nonatomic) IESLLLiveXBridgeEventSubscriber *couponListSubscriber;
@property (retain, nonatomic) IESLLLiveXBridgeEventSubscriber *couponChangeSubscriber;
@property (retain, nonatomic) IESLLLiveMessageSubscriber *couponDataCenterSubscriber;
@property (retain, nonatomic) IESLLLiveMessageSubscriber *couponInvalidDataCenterSubscriber;
@property (retain, nonatomic) NSArray *couponList;
@property (retain, nonatomic) NSDictionary *collectedCouponMap;
@property (retain, nonatomic) NSArray *couponDCList;
@property (retain, nonatomic) NSDictionary *collectedCouponDCMap;
@property (nonatomic) BOOL useDataCenter;
@property (weak, nonatomic) id<IESLLLiveEnterCouponDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pickAndCollectCouponWithLiveRoomParams:(id)a0 successBlock:(id /* block */)a1;
- (id)collectedCouponList;
- (id)allCouponList;
- (void)openLiveLifePopup:(id)a0;
- (void)addEnterCouponNotification;
- (void)receiveEnterCouponListInfo:(id)a0;
- (void)receiveEnterCouponChangeInfo:(id)a0;
- (void)receiveDataCenterEnterCouponListInfo:(id)a0;
- (void)receiveDataCenterEnterCouponInvalidListInfo:(id)a0;
- (void)mergeCollectedCouponWithList:(id)a0;
- (void)mergeCollectedCouponDCWithList:(id)a0;
- (void)processWithCouponId:(id)a0 couponType:(long long)a1 pickCoupon:(id)a2 model:(id)a3 error:(id)a4 successBlock:(id /* block */)a5;
- (void)collectCouponResultTrack:(id)a0 couponType:(long long)a1 success:(BOOL)a2 text:(id)a3 extraLog:(id)a4;
- (void)markCouponCollectedWithKeyCouponId:(id)a0 couponInfo:(id)a1;
- (void)postEnterCouponChangeNoticationWithCouponInfo:(id)a0;
- (void).cxx_destruct;
- (void)unsubscribe;
- (id)init;

@end

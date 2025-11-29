@class NSMutableArray;
@protocol ACCCameraService;

@interface ACCEffectTouchDeliveryGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (nonatomic) BOOL isTouching;
@property (nonatomic) BOOL needCacheTouch;
@property (nonatomic) long long tapCounter;
@property (retain, nonatomic) NSMutableArray *cachedTouchInfoList;
@property (nonatomic) BOOL deliveryImmediately;
@property (nonatomic) BOOL openDeliveryByTap;
@property (copy, nonatomic) id /* block */ touchFilterBlock;

- (id)initWithCameraService:(id)a0;
- (void)deliveryCachedTouches;
- (void)delayCheckOpenDeliveryWithCount:(long long)a0;
- (void)_handleTouches:(id)a0;
- (BOOL)_checkAllTouchesFinished:(id)a0;
- (void)_delayReset;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end

@interface ACCGestureUtils : NSObject

+ (id)recognizerWithType:(unsigned long long)a0;
+ (id)adjustTouchLocation:(struct CGPoint { double x0; double x1; })a0 withView:(id)a1 screenRatio:(double)a2 logSubTag:(id)a3;
+ (BOOL)hasGestureTagAll:(id)a0;
+ (id)effectGestureMutexBaseTypeMap;
+ (id)fetchVETouchInfoListForTouches:(id)a0 containerView:(id)a1;
+ (void)deliveryTouchs:(id)a0 toCameraService:(id)a1 containerView:(id)a2;
+ (id)baseGestureMutexEffectGestureTypeMap;
+ (BOOL)isGestureTypeValid:(unsigned long long)a0;
+ (id)veTouchInfoForTouch:(id)a0 totalTouchCount:(unsigned long long)a1 containerView:(id)a2;

@end

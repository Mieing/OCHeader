@class NSMapTable, NSHashTable;

@interface BUPLMotionManager : NSObject

@property (retain, nonatomic) NSMapTable *managerContainer;
@property (retain, nonatomic) NSHashTable *hashTable;

+ (id)sharedInstance;

- (id)startAccelerometerObserverInterval:(double)a0 playableAd:(id)a1;
- (id)stopAccelerometerObserverWithPlayableAd:(id)a0;
- (id)startGyroObserverInterval:(double)a0 playableAd:(id)a1;
- (id)stopGyroObserverObserverWithPlayableAd:(id)a0;
- (id)startAccelerometerNoGravityObserverInterval:(double)a0 playableAd:(id)a1;
- (id)stopAccelerometerNoGravityObserverWithPlayableAd:(id)a0;
- (id)startRotationRateObserverInterval:(double)a0 playableAd:(id)a1;
- (id)stopRotationRateObserverWithPlayableAd:(id)a0;
- (void)handleAccelerometerObserverWithPlayableAd:(id)a0 model:(struct { double x0; double x1; double x2; })a1;
- (void)handleGyroObserverWithPlayableAd:(id)a0 model:(struct { double x0; double x1; double x2; })a1;
- (void)handleAccelerometerNoGravityObserverWithPlayableAd:(id)a0 model:(struct { double x0; double x1; double x2; })a1;
- (id)startDeviceMotionUpdatesWithInterval:(double)a0 playableAd:(id)a1 withHandler:(id /* block */)a2;
- (id)stopDeviceMotionUpdatesWithPlayableAd:(id)a0;
- (void)handleRotationRateObserverWithPlayableAd:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

@class NSMapTable, NSHashTable;

@interface CSJMotionManager : NSObject

@property (retain, nonatomic) NSMapTable *managerContainer;
@property (retain, nonatomic) NSHashTable *hashTable;

+ (id)sharedInstance;

- (id)startAccelerometerObserverInterval:(double)a0 webView:(id)a1;
- (id)stopAccelerometerObserverWithWebView:(id)a0;
- (id)startGyroObserverInterval:(double)a0 webView:(id)a1;
- (id)stopGyroObserverObserverWithWebView:(id)a0;
- (id)startWobbleObserverWebView:(id)a0 shakeAmplitude:(double)a1 calculateSize:(long long)a2;
- (id)stopWobbleObserverWithWebView:(id)a0;
- (id)startTwistObserverWithThreshold:(long long)a0 webView:(id)a1;
- (id)stopTwistObserverWithWebView:(id)a0;
- (id)getUnavailableModel;
- (void)handleAccelerometerObserverWithWebView:(id)a0 model:(struct { double x0; double x1; double x2; })a1;
- (id)getSuccessModel;
- (void)handleGyroObserverWithWebView:(id)a0 model:(struct { double x0; double x1; double x2; })a1;
- (void)wobbleObserverCallBack;
- (id)shakeScenceWithWebView:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

@class NSOperationQueue, NSMapTable, NSMutableDictionary;

@interface CSJAccelerometerMotionManager : NSObject

@property (retain, nonatomic) NSMapTable *managerContainer;
@property (retain, nonatomic) NSOperationQueue *updatesQueue;
@property (nonatomic) double amplitude;
@property (nonatomic) BOOL triggerFromWeb;
@property (retain, nonatomic) NSMutableDictionary *triggerFromWebInfo;
@property (nonatomic) long long calculationMethod;

+ (id)sharedInstance;

- (void)outputAccelertionData:(struct { double x0; double x1; double x2; })a0 amplitude:(double)a1 scence:(id)a2 calculateMethod:(long long)a3 acceleroMotionAction:(id /* block */)a4;
- (void)stopAccelerometerWithScence:(id)a0;
- (void)startAccelerometerWithAmplitude:(double)a0 triggerFromWeb:(BOOL)a1 scence:(id)a2 calculateMethod:(long long)a3 acceleroMotionAction:(id /* block */)a4;
- (BOOL)accelerometerActiveWithScence:(id)a0;
- (BOOL)triggerFromWebWithScence:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

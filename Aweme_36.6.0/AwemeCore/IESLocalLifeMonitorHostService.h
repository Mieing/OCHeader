@class NSString;

@interface IESLocalLifeMonitorHostService : HTSService <IESLocalLifeMonitorHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)endSceneWithName:(id)a0 context:(const void *)a1;
+ (void)beginSceneWithName:(id)a0 context:(const void *)a1;
+ (double)timeIntervalForKey:(id)a0;
+ (void)cancelTimingForKey:(id)a0;
+ (void)optimizeRoundCornerWithKey:(id)a0 layer:(id)a1;
+ (id)coldLaunchTime;
+ (void)calculateFMPForView:(id)a0 startTime:(double)a1 respondToGesture:(BOOL)a2 completion:(id /* block */)a3;
+ (void)calculateFMPForView:(id)a0 startTime:(double)a1 config:(id)a2 respondToGesture:(BOOL)a3 delegate:(id)a4 completion:(id /* block */)a5;
+ (void)calculateFMPForView:(id)a0 startTime:(double)a1 completion:(id /* block */)a2;
+ (id)convertCalculateConfig:(id)a0;
+ (void)setExtra:(id)a0 forKey:(id)a1 withViewController:(id)a2;
+ (void)setPerfLoad:(id)a0 forObject:(id)a1;
+ (id)getSessionWithController:(id)a0;
+ (void)startTimingForKey:(id)a0;


@end

@class NSLock, NSMapTable;

@interface CSJShakeTriggerManager : NSObject

@property (retain, nonatomic) NSMapTable *trackerContainers;
@property (retain, nonatomic) NSLock *trackerLock;

+ (void)startAccelerometerWithDataSource:(id)a0;
+ (void)stopAccelerometerWithDataSource:(id)a0;
+ (void)acceleroMotionActionWithDataSource:(id)a0;
+ (BOOL)validShakeWithContainer:(id)a0;
+ (void)_csj_safeShakeTriggerDelegateWithDataSource:(id)a0;
+ (void)unlock;
+ (void)lock;
+ (id)manager;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)registerWithContainerView:(id)a0 dataSource:(id)a1;
- (void)unregisterWithDataSource:(id)a0;
- (id)copy;
- (void).cxx_destruct;
- (id)mutableCopy;

@end

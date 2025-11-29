@class NSString, NSMeasurement, NSMutableArray;

@interface AWETaskSpreadDispatcherBase : NSObject <AWETaskSpreadDispatcherProtocol>

@property (class, readonly, nonatomic) NSMeasurement *currentMachTime;

@property (retain, nonatomic) NSMutableArray *metaTasks;
@property (readonly, nonatomic) NSMeasurement *currentMachTime;
@property (nonatomic, getter=isIdle) BOOL idle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)currentMachTimeInSeconds;
+ (id)machTimeAfterDelay:(double)a0;

- (void)__bindTaskObserver:(id)a0;
- (void)__updateIdleState;
- (void)removeMetaTask:(id)a0;
- (void)registToMainScheduler;
- (void)addMetaTask:(id)a0;
- (void)removeMetaTaskWithFilter:(id /* block */)a0;
- (void)removeAllMetaTask;
- (id)findMetaTaskWithFilter:(id /* block */)a0;
- (void)executeMetaTaskWithContext:(id /* block */)a0;
- (void).cxx_destruct;
- (void)execute;
- (id)init;

@end

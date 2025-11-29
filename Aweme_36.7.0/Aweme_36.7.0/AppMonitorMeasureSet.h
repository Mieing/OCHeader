@class NSLock, NSMutableOrderedSet;

@interface AppMonitorMeasureSet : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *measures;
@property (retain, nonatomic) NSLock *lock;

+ (id)setWithArray:(id)a0;

- (id)measureForName:(id)a0;
- (void)addMeasure:(id)a0;
- (void)addMeasureWithName:(id)a0;
- (BOOL)valid:(id)a0 MonitorPoint:(id)a1 measureValues:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)setConstantValue:(id)a0;

@end

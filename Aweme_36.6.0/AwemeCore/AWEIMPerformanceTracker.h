@class NSString, NSMutableDictionary, NSDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMPerformanceTracker : NSObject <AWEIMPerformanceTracker>

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSMutableDictionary *trackDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackerWithEvent:(id)a0 scene:(id)a1;
+ (id)trackerWithEvent:(id)a0 scene:(id)a1 threadSafe:(BOOL)a2;

- (id)trackParams;
- (void)trackReport;
- (void)tickWithMethod:(id)a0;
- (void)tockWithMethod:(id)a0;
- (void)p_trackTimestampWithMethod:(id)a0 timeKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

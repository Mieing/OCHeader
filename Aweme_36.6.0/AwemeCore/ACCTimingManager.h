@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface ACCTimingManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *timingDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;

+ (id)sharedInstance;

- (double)timeIntervalForKey:(id)a0;
- (void)cancelTimingForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)stopTimingForKey:(id)a0;
- (void)startTimingForKey:(id)a0;

@end

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWETimingManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *timingDict;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (nonatomic) double launchTime;

+ (void)_aweLazyRegisterLoad;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (double)timeIntervalForKey:(id)a0;
- (void)cancelTimingForKey:(id)a0;
- (double)launchTimeInterval;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (double)stopTimingForKey:(id)a0;
- (void)startTimingForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

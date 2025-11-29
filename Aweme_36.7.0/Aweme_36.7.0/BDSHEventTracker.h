@class NSNumber, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDSHEventTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) NSNumber *startTimestamp;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (nonatomic) long long version;

- (void)setTrackerContext:(id)a0;
- (void)startThreadSwitchTimestamp;
- (void)finishThreadSwitchTimestamp;
- (void)updateTemplateType:(long long)a0;
- (void)updateEventLoadType:(long long)a0 params:(id)a1;
- (void)trackComponentLoadEvent;
- (void).cxx_destruct;
- (id)initWithVersion:(long long)a0;
- (id)currentTimestamp;

@end

@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface MJTimeCostReporterService : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventStartDates;
@property (retain, nonatomic) NSMutableDictionary *eventParams;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSString *keySeparator;

+ (id)sharedInstance;

- (id)init;
- (id)_calcKeyWithName:(id)a0 uid:(id)a1;
- (void)markEventBeginWithName:(id)a0;
- (void)markEventBeginWithName:(id)a0 uid:(id)a1;
- (void)markEventEndWithName:(id)a0;
- (void)markEventEndWithName:(id)a0 uid:(id)a1;
- (void)markEventEndWithName:(id)a0 endReason:(id)a1;
- (void)markEventEndWithName:(id)a0 uid:(id)a1 endReason:(id)a2;
- (void)markEventEndWithName:(id)a0 endReason:(id)a1 params:(id)a2;
- (void)markEventEndWithName:(id)a0 uid:(id)a1 endReason:(id)a2 params:(id)a3;
- (void)addParams:(id)a0 forRunningEventName:(id)a1;
- (void)addParams:(id)a0 forRunningEventName:(id)a1 uid:(id)a2;
- (void)reportEventWithName:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end

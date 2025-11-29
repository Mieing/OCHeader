@class EKSource, EKEventStore;

@interface BDPCalendarManager_HG : NSObject

@property (retain, nonatomic) EKSource *source;
@property (retain, nonatomic) EKEventStore *eventStore;

+ (id)sharedInstance;

- (id)eventFromParam:(id)a0;
- (BOOL)saveEventWithParam:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)calendar;

@end

@class EKCalendar, EKEventStore;

@interface BDCalendarStore : NSObject

@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) EKCalendar *preferCalendar;

- (id)createEventFailedError;
- (id)eventNotFoundErrorForId:(id)a0;
- (void)requestAccessToEntityType:(unsigned long long)a0 privacyCert:(id)a1 completion:(id /* block */)a2;
- (id)saveEvent:(id)a0 privacyCert:(id)a1;
- (id)removeCalenarEvent:(id)a0 privacyCert:(id)a1;
- (BOOL)isCalendarEventExist:(id)a0;
- (void).cxx_destruct;
- (id)calendar;
- (id)init;

@end

@interface BDCalendarPrivacyCertEntry : BDPrivacyCertEntry

+ (void)requestAccessToEntityType:(unsigned long long)a0 eventStore:(id)a1 privacyCert:(id)a2 completion:(id /* block */)a3;
+ (long long)authorizationStatusForEntityType:(unsigned long long)a0 privacyCert:(id)a1 error:(id *)a2;
+ (id)calendarsForEntityType:(unsigned long long)a0 eventStore:(id)a1 privacyCert:(id)a2 error:(id *)a3;
+ (id)eventsMatchingPredicate:(id)a0 eventStore:(id)a1 privacyCert:(id)a2 error:(id *)a3;
+ (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 eventStore:(id)a3 privacyCert:(id)a4 error:(id *)a5;
+ (BOOL)saveEvent:(id)a0 span:(long long)a1 eventStore:(id)a2 privacyCert:(id)a3 error:(id *)a4;
+ (BOOL)removeEvent:(id)a0 span:(long long)a1 eventStore:(id)a2 privacyCert:(id)a3 error:(id *)a4;
+ (void)requestAccessToEventStore:(id)a0 authorizationLevel:(long long)a1 privacyCert:(id)a2 completion:(id /* block */)a3;

@end

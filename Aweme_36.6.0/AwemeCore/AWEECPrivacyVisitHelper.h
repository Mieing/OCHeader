@class NSString;

@interface AWEECPrivacyVisitHelper : NSObject <IESECPasteboardService, IESECOpenURLService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openURL:(id)a0 options:(id)a1 visitType:(long long)a2 context:(id)a3 completion:(id /* block */)a4;
+ (void)openSystemAppSettingsWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)getPasteboardStringForType:(long long)a0 withContext:(id)a1 completion:(id /* block */)a2;
+ (id)certForIESECPasteboardVisit:(long long)a0;
+ (void)updatePasteboardString:(id)a0 cert:(id)a1 completion:(id /* block */)a2;
+ (id)certForAWEECPasteboardVisit:(long long)a0;
+ (void)getPasteboardStringWithCert:(id)a0 completion:(id /* block */)a1;
+ (id)certForIESECOpenURLVisit:(long long)a0;
+ (id)certForAWEECVideoAudioVisit:(long long)a0;
+ (id)certForAWEECCalendarVisit:(long long)a0;
+ (void)updatePasteboardString:(id)a0 visitType:(long long)a1 context:(id)a2 completion:(id /* block */)a3;
+ (void)requestVideoAudioAuth:(long long)a0 completion:(id /* block */)a1;
+ (long long)authorizationStatusForEntityType:(unsigned long long)a0 forType:(long long)a1;
+ (void)requestAccessToEntityType:(unsigned long long)a0 eventStore:(id)a1 forType:(long long)a2 completion:(id /* block */)a3;
+ (id)calendarsForEntityType:(unsigned long long)a0 eventStore:(id)a1 forType:(long long)a2;
+ (id)predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 eventStore:(id)a3 forType:(long long)a4;
+ (id)eventsMatchingPredicate:(id)a0 eventStore:(id)a1 forType:(long long)a2;
+ (BOOL)saveEvent:(id)a0 span:(long long)a1 eventStore:(id)a2 forType:(long long)a3 error:(id *)a4;
+ (BOOL)removeEvent:(id)a0 span:(long long)a1 eventStore:(id)a2 forType:(long long)a3 error:(id *)a4;


@end

@interface BDUGLuckySystemApi : NSObject

+ (void)__sendPrivacyActionTrackWithEntry:(id)a0 hostImpl:(id)a1 paramModel:(id)a2 method:(id)a3 forBPEAScene:(unsigned long long)a4;
+ (id)__urlForBDXBridgeContext:(id)a0;
+ (void)__sendPrivacyActionTrackWithEntry:(id)a0 hostImpl:(id)a1 forBPEAScene:(unsigned long long)a2;
+ (id)sharedInstance;

- (void)lucky_readPasteboardWithCompletion:(id /* block */)a0 forBPEAScene:(unsigned long long)a1;
- (void)lucky_writePasteboard:(id)a0 withCompletion:(id /* block */)a1 forBPEAScene:(unsigned long long)a2;
- (void)lucky_requestAccessToEntityType:(unsigned long long)a0 eventStore:(id)a1 completion:(id /* block */)a2 forBPEAScene:(unsigned long long)a3;
- (BOOL)lucky_saveEvent:(id)a0 span:(long long)a1 eventStore:(id)a2 error:(id *)a3 forBPEAScene:(unsigned long long)a4;
- (BOOL)lucky_removeEvent:(id)a0 span:(long long)a1 eventStore:(id)a2 error:(id *)a3 forBPEAScene:(unsigned long long)a4;
- (long long)lucky_authorizationStatusForEntityType:(unsigned long long)a0 error:(id *)a1 forBPEAScene:(unsigned long long)a2;
- (id)lucky_calendarsForEntityType:(unsigned long long)a0 eventStore:(id)a1 error:(id *)a2 forBPEAScene:(unsigned long long)a3;
- (id)lucky_predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 eventStore:(id)a3 error:(id *)a4 forBPEAScene:(unsigned long long)a5;
- (id)lucky_eventsMatchingPredicate:(id)a0 eventStore:(id)a1 error:(id *)a2 forBPEAScene:(unsigned long long)a3;
- (void)lucky_requestAccessCameraWithCompletion:(id /* block */)a0 forBPEAScene:(unsigned long long)a1;
- (void)lucky_requestAccessMicrophoneWithCompletion:(id /* block */)a0 forBPEAScene:(unsigned long long)a1;
- (void)lucky_requestAuthorizationForAccessLevel:(long long)a0 completion:(id /* block */)a1 forBPEAScene:(unsigned long long)a2;
- (void)lucky_requestAuthorizationWithCompletion:(id /* block */)a0 forBPEAScene:(unsigned long long)a1;
- (BOOL)lucky_openURL:(id)a0 forBPEAScene:(unsigned long long)a1;
- (void)lucky_openURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 forBPEAScene:(unsigned long long)a3;
- (void)lucky_writePasteboard:(id)a0 withCompletion:(id /* block */)a1 paramModel:(id)a2 method:(id)a3 forBPEAScene:(unsigned long long)a4;
- (void)lucky_openURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 paramModel:(id)a3 method:(id)a4 forBPEAScene:(unsigned long long)a5;
- (BOOL)lucky_openURL:(id)a0 paramModel:(id)a1 method:(id)a2 forBPEAScene:(unsigned long long)a3;
- (void)lucky_requestAuthorizationForAccessLevel:(long long)a0 completion:(id /* block */)a1 paramModel:(id)a2 method:(id)a3 forBPEAScene:(unsigned long long)a4;
- (void)lucky_requestAuthorizationWithCompletion:(id /* block */)a0 paramModel:(id)a1 method:(id)a2 forBPEAScene:(unsigned long long)a3;
- (long long)_lucky_authorizationStatusForEntityType:(unsigned long long)a0 error:(id *)a1 paramModel:(id)a2 method:(id)a3 forBPEAScene:(unsigned long long)a4;
- (void)lucky_readPasteboardWithCompletion:(id /* block */)a0 paramModel:(id)a1 method:(id)a2 forBPEAScene:(unsigned long long)a3;
- (void)lucky_requestAccessToEntityType:(unsigned long long)a0 eventStore:(id)a1 completion:(id /* block */)a2 paramModel:(id)a3 method:(id)a4 forBPEAScene:(unsigned long long)a5;
- (BOOL)lucky_saveEvent:(id)a0 span:(long long)a1 eventStore:(id)a2 error:(id *)a3 paramModel:(id)a4 method:(id)a5 forBPEAScene:(unsigned long long)a6;
- (BOOL)lucky_removeEvent:(id)a0 span:(long long)a1 eventStore:(id)a2 error:(id *)a3 paramModel:(id)a4 method:(id)a5 forBPEAScene:(unsigned long long)a6;
- (long long)lucky_authorizationStatusForEntityType:(unsigned long long)a0 error:(id *)a1 paramModel:(id)a2 method:(id)a3 forBPEAScene:(unsigned long long)a4;
- (id)lucky_calendarsForEntityType:(unsigned long long)a0 eventStore:(id)a1 error:(id *)a2 paramModel:(id)a3 method:(id)a4 forBPEAScene:(unsigned long long)a5;
- (id)lucky_predicateForEventsWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2 eventStore:(id)a3 error:(id *)a4 paramModel:(id)a5 method:(id)a6 forBPEAScene:(unsigned long long)a7;
- (id)lucky_eventsMatchingPredicate:(id)a0 eventStore:(id)a1 error:(id *)a2 paramModel:(id)a3 method:(id)a4 forBPEAScene:(unsigned long long)a5;
- (void)lucky_requestAccessCameraWithCompletion:(id /* block */)a0 paramModel:(id)a1 method:(id)a2 forBPEAScene:(unsigned long long)a3;
- (void)lucky_requestAccessMicrophoneWithCompletion:(id /* block */)a0 paramModel:(id)a1 method:(id)a2 forBPEAScene:(unsigned long long)a3;
- (long long)_lucky_authorizationStatusForEntityType:(unsigned long long)a0 error:(id *)a1 forBPEAScene:(unsigned long long)a2;

@end

@interface LiteAppJsApiAdRequestAppointment : LiteAppJsApiAdBase <PBMessageObserverDelegate>

- (void)doAdInvokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)sendAdAppointmentReqWithUxInfo:(id)a0 opType:(int)a1 appointmentId:(unsigned long long)a2 phoneNumber:(id)a3;
- (void)handleAdAppointmentResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end

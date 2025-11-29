@interface BDPPluginCalendar : BDPBridgeInstancePlugin

- (void)addCalendarEventWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)checkCalendarEventWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)deleteCalendarEventWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end

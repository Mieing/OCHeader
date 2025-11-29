@class EKEventStore;

@interface BDPPluginCalendar_HG : BDPBridgeInstancePlugin

@property (retain, nonatomic) EKEventStore *eventStore;

- (void)addPhoneCalendarWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)addPhoneRepeatCalendarWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end

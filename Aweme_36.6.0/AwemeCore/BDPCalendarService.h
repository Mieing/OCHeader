@class EKSource, NSDateFormatter, EKEventStore, NSMutableSet, NSString;

@interface BDPCalendarService : NSObject <BDPCalendarService>

@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) EKSource *source;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSMutableSet *toastStateChecking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)showCalendarEventPopupForAppID:(id)a0 title:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)bdp_addCalendarEventWithAppID:(id)a0 param:(id)a1 callback:(id /* block */)a2;
- (void)bdp_checkCalendarEventWithAppID:(id)a0 param:(id)a1 callback:(id /* block */)a2;
- (void)bdp_removeCalendarEventWithAppID:(id)a0 param:(id)a1 callback:(id /* block */)a2;
- (id)checkCalendarWithAppID:(id)a0 apiName:(id)a1;
- (id)addCalendarEventWithParam:(id)a0 appID:(id)a1;
- (void)removeLocalEventWithParams:(id)a0;
- (void)checkLocalEventWithParams:(id)a0 type:(id)a1 appID:(id)a2 completion:(id /* block */)a3;
- (void)checkCalendarEventWithDurationParam:(id)a0 type:(id)a1 appID:(id)a2 completion:(id /* block */)a3;
- (id)lastSecondForDate:(id)a0;
- (id)creatCalendarWithAppID:(id)a0;
- (id)addLocalEventWithParams:(id)a0 ekEvent:(id)a1;
- (id)localEventKeyWithEventParams:(id)a0;
- (id)cleanLocalEventsForLimit:(id)a0;
- (id)getToastTextWithParam:(id)a0;
- (void).cxx_destruct;

@end

@class EKEventStore, NSUserDefaults;

@interface AnnieBridgeCalendarManager : NSObject

@property (class, readonly, nonatomic) AnnieBridgeCalendarManager *sharedManager;

@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) NSUserDefaults *userDefaults;

- (id)calendarsForEntityStore:(id)a0 entityType:(unsigned long long)a1 token:(id)a2 context:(id)a3;
- (void)requestAccessWithJSBContext:(id)a0 actionHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)createEventWithBizParamModel:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)readEventWithBizID:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteEventWithBizID:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestAccessWithJSBContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

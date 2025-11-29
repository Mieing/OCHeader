@class NSUserDefaults, EKEventStore;

@interface BDXBridgeCalendarManager : NSObject

@property (class, readonly, nonatomic) BDXBridgeCalendarManager *sharedManager;

@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) NSUserDefaults *userDefaults;

- (void)requestAccessWithActionHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)createEventWithBizParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)readEventWithBizID:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteEventWithBizID:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)requestAccessWithCompletion:(id /* block */)a0;

@end

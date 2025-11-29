@class EKEvent, NSDictionary, EKEventStore, NSString;

@interface WAJSEventHandler_addPhoneCalendar : WAJSEventHandler_BaseEvent <EKEventEditViewDelegate>

@property (retain, nonatomic) NSDictionary *dic;
@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (id)showEventEdit;
- (void)eventEditViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (id)eventEditViewControllerDefaultCalendarForNewEvents:(id)a0;
- (void).cxx_destruct;

@end

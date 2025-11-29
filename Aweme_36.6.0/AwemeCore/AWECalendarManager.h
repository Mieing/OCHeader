@class NSString, EKEventStore;

@interface AWECalendarManager : HTSService <AWECalendarService>

@property (retain, nonatomic) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isParamsValid:(id)a0;
- (void)operateCalendarWithAction:(id /* block */)a0 cert:(id)a1 completionBlock:(id /* block */)a2;
- (void)requestCalendarPermissionIfNeeded:(BOOL)a0 cert:(id)a1 completionBlock:(id /* block */)a2;
- (void)createCalendarEvent:(id)a0 cert:(id)a1 completionBlock:(id /* block */)a2;
- (void)cancelCalendarEvent:(id)a0 cert:(id)a1 completionBlock:(id /* block */)a2;
- (void)getCalendarEvent:(id)a0 cert:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString;

@interface IESLiveCalendarEventServiceImp : NSObject <IESLiveCalendarEventService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createCalendarEvent:(id)a0 privacyCert:(id)a1 withContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)cancelCalendarEvent:(id)a0 privacyCert:(id)a1 withContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)getCalendarEvent:(id)a0 privacyCert:(id)a1 withContext:(id)a2 completionBlock:(id /* block */)a3;

@end

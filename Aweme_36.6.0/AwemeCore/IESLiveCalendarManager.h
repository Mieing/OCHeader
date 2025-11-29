@class HTSEventContext, EKEventStore;
@protocol HTSKVStore;

@interface IESLiveCalendarManager : NSObject

@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) id<HTSKVStore> kvStore;
@property (retain, nonatomic) HTSEventContext *trackContext;

+ (id)sharedInstance;

- (void)createCalendarEvent:(id)a0 privacyCert:(id)a1 withContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)cancelCalendarEvent:(id)a0 privacyCert:(id)a1 withContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)getCalendarEvent:(id)a0 privacyCert:(id)a1 withContext:(id)a2 completionBlock:(id /* block */)a3;
- (BOOL)isParamsValid:(id)a0;
- (void)operateCalendarWithAction:(id /* block */)a0 privacyCert:(id)a1 withContext:(id)a2 completionBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end

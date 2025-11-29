@class NSMapTable;

@interface AWETimorBulletEventHandler : NSObject

@property (retain, nonatomic) NSMapTable *subscriberMapTable;
@property (nonatomic) BOOL disableUnsubscribeAllEventWhenDealloc;
@property (copy, nonatomic) id /* block */ willDestroyCallback;

- (id)subscribeEventName:(id)a0 extraDict:(id)a1 callback:(id /* block */)a2;
- (void)unsubscribeAllEvent;
- (void)unsubscribeEventName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

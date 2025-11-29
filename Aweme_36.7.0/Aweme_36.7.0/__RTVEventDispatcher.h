@class __RTVEventBusActionCollection;

@interface __RTVEventDispatcher : NSObject

@property (retain, nonatomic) __RTVEventBusActionCollection *actionCollection;

- (void)removeActionKey:(id)a0 withEventKey:(id)a1;
- (void)registerEvent:(id)a0 withEventKey:(id)a1;
- (void)dispatchEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

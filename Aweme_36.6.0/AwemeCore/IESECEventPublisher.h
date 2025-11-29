@class NSMutableDictionary;

@interface IESECEventPublisher : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventHandlers;

- (void)removeEventHandlerForKey:(id)a0;
- (void)didAddEventHandler;
- (void)didRemoveEventHandler;
- (void).cxx_destruct;
- (id)init;
- (void)publish:(id)a0;
- (id)addEventHandler:(id /* block */)a0;

@end

@class NSMutableDictionary;

@interface LSEventKit : NSObject

@property (retain, nonatomic) NSMutableDictionary *events;

- (BOOL)addObserver:(id)a0 selector:(SEL)a1 eventClass:(Class)a2;
- (void).cxx_destruct;
- (void)postEvent:(id)a0;
- (id)init;

@end

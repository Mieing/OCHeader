@class NSArray;

@interface AWETrackerHooker : NSObject

@property (nonatomic) BOOL allHook;
@property (retain, nonatomic) NSArray *events;
@property (copy, nonatomic) id /* block */ hookerHandler;

+ (id)initWithEvents:(id)a0 eventHandler:(id /* block */)a1;
+ (id)allHookerWithEventHandler:(id /* block */)a0;

- (BOOL)trackEvent:(id)a0 params:(id)a1;
- (id)initWithEvents:(id)a0 eventHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithEventHandler:(id /* block */)a0;

@end

@class NSMutableArray;

@interface WAJSEventHandler_addMapCircles : WAJSEventHandler_BaseEvent

@property (retain, nonatomic) NSMutableArray *overlays;

- (void)handleJSEvent:(id)a0;
- (void)addMapCircle:(id)a0 circle:(id)a1;
- (void).cxx_destruct;

@end

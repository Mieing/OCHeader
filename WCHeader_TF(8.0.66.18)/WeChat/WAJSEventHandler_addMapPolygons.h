@class NSMutableArray;

@interface WAJSEventHandler_addMapPolygons : WAJSEventHandler_BaseEvent

@property (retain, nonatomic) NSMutableArray *overlays;

- (void)handleJSEvent:(id)a0;
- (void)addMapPolygon:(id)a0 polygon:(id)a1;
- (void).cxx_destruct;

@end

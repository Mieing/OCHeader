@class NSMutableArray;

@interface WAJSEventHandler_addMapLines : WAJSEventHandler_BaseEvent

@property (retain, nonatomic) NSMutableArray *overlays;

- (void)handleJSEvent:(id)a0;
- (void)addMapLine:(id)a0 line:(id)a1;
- (id)createArrowImage:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end

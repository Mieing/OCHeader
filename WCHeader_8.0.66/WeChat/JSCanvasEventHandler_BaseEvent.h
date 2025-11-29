@protocol JSCanvasEventHandlerContextDelegate;

@interface JSCanvasEventHandler_BaseEvent : WAJSEventHandler_BaseEvent

@property (weak, nonatomic) id<JSCanvasEventHandlerContextDelegate> canvasContext;

- (void).cxx_destruct;

@end

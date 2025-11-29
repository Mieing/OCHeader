@class MBJSFunction;

@interface MBEventHandlerBaseAsync : MBEventHandlerBase

@property (retain, nonatomic) MBJSFunction *callbackFunc;

- (void)invoke:(id)a0;
- (void)callback:(id)a0;
- (void).cxx_destruct;

@end

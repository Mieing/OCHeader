@class JSEventInvokeContext, NSObject;

@interface MMWebPluginNativeVideoJSContext : NSObject

@property (retain, nonatomic) NSObject *data;
@property (retain, nonatomic) JSEventInvokeContext *jsContext;

- (void).cxx_destruct;

@end

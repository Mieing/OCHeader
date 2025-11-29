@class NSString;

@interface FlutterKeyboardVisibilityPlugin : NSObject <FlutterStreamHandler, FlutterPlugin>

@property (copy, nonatomic) id /* block */ flutterEventSink;
@property (nonatomic) BOOL flutterEventListening;
@property (nonatomic) BOOL isVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerWithRegistrar:(id)a0;

- (id)init;
- (void)didShow;
- (void)willShow;
- (void)didHide;
- (id)onListenWithArguments:(id)a0 eventSink:(id /* block */)a1;
- (id)onCancelWithArguments:(id)a0;
- (void).cxx_destruct;

@end

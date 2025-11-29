@class NSString;

@interface NativeDeviceOrientationPlugin : NSObject <FlutterPlugin, FlutterStreamHandler>

@property (retain) id observer;
@property (copy) id /* block */ orientationRetrieved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerWithRegistrar:(id)a0;

- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;
- (void)pause;
- (void)resume;
- (id)onListenWithArguments:(id)a0 eventSink:(id /* block */)a1;
- (id)onCancelWithArguments:(id)a0;
- (void).cxx_destruct;

@end

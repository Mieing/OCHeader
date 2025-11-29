@class NSString;

@interface OrientationPlugin : NSObject <FlutterPlugin, FlutterStreamHandler>

@property (retain) id motionManager;
@property int currentOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerWithRegistrar:(id)a0;

- (id)init;
- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;
- (void)setSystemChromePreferredOrientations:(id)a0;
- (void)forceOrientation:(id)a0;
- (id)onListenWithArguments:(id)a0 eventSink:(id /* block */)a1;
- (id)onCancelWithArguments:(id)a0;
- (void).cxx_destruct;

@end

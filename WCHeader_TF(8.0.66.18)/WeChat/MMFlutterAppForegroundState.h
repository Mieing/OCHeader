@class FlutterBasicMessageChannel;

@interface MMFlutterAppForegroundState : NSObject {
    FlutterBasicMessageChannel *_foregroundStateChannel;
}

- (id)initWithMessenger:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;

@end

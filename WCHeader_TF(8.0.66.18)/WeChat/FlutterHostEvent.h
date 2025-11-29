@class FlutterBasicMessageChannel;

@interface FlutterHostEvent : NSObject {
    FlutterBasicMessageChannel *_channel;
}

- (id)initWithMessenger:(id)a0;
- (void)onEngineExitCallback:(id /* block */)a0;
- (void)onUpdateUIContext;
- (void)onAccountLogout;
- (void).cxx_destruct;

@end

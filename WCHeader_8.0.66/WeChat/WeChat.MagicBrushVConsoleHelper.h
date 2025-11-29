@interface WeChat.MagicBrushVConsoleHelper : NSObject <IMBVConsoleDelegate, YYWebViewDelegate> {
    void /* unknown type, empty encoding */ webview;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ visible;
    void /* unknown type, empty encoding */ finishLoad;
    void /* unknown type, empty encoding */ pendingLogs;
    void /* unknown type, empty encoding */ enable;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ containerView;

- (id)init:(id)a0;
- (void)vConsoleLog:(id)a0;
- (void)switchVConsole:(BOOL)a0;
- (void)reset;
- (void)dealloc;
- (void)layout;
- (void)webViewDidFinishLoad:(id)a0 navigation:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end

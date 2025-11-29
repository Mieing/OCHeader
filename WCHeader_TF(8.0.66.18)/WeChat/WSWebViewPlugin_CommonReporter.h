@class WSViewStayTimeReporter, _TtC6WeChat23WSSearchProcessReporter;

@interface WSWebViewPlugin_CommonReporter : WSWebViewPluginBase

@property (retain, nonatomic) WSViewStayTimeReporter *stayTimeReporter;
@property (retain, nonatomic) _TtC6WeChat23WSSearchProcessReporter *processReporter;

- (id)init;
- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)onStartLoadHtml:(id)a0;
- (void)onDidFinishLoad;
- (void).cxx_destruct;

@end

@class FlutterBizTextCoverPlugin, BizTextCoverEditorParams;

@interface BizTextCoverFlutterViewController : MMFlutterViewController

@property (retain, nonatomic) FlutterBizTextCoverPlugin *textCoverPlugin;
@property (retain, nonatomic) BizTextCoverEditorParams *params;
@property (copy, nonatomic) id /* block */ resultCallback;

- (id)initWithParams:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupPlugins;
- (void)handleCoverInfo:(id)a0;
- (void).cxx_destruct;

@end

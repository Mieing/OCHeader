@class FTSWebSearchMgr, NSString;

@interface WSWebViewPlugin_webSearchMgrContainer : WSWebViewPluginBase <WebSearchMgrDelegate>

@property (retain, nonatomic) FTSWebSearchMgr *webSearchMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onUpdateLocalImage:(id)a0;
- (void).cxx_destruct;

@end

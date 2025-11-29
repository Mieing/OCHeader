@class NSString, KindaTinyAppUIPage, KindaLiteAppUIPage;

@interface KindaPageController : NSObject <KindaViewControllerControlDelegate, KindaTinyAppUIPageDelegate, MMWebViewDelegate, KindaLiteAppUIPageDelegate, MMIUIPageController>

@property (retain, nonatomic) KindaTinyAppUIPage *tinyAppPage;
@property (retain, nonatomic) KindaLiteAppUIPage *liteAppPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)onWebViewPassParams:(id)a0 Webview:(id)a1;
- (void)webViewDidReturn:(id)a0;
- (void)pushWebView:(id)a0 extraData:(id)a1 animated:(BOOL)a2;
- (void)presentWebView:(id)a0 extraData:(id)a1 animated:(BOOL)a2;
- (void)openTinyApp:(id)a0 extraData:(id)a1;
- (void)pushVC:(id)a0 animated:(BOOL)a1;
- (void)presentVC:(id)a0 animated:(BOOL)a1;
- (void)startPageUI:(id)a0 animated:(BOOL)a1 extraData:(id)a2;
- (void)popAndStartPageUI:(id)a0 animated:(BOOL)a1 extraData:(id)a2;
- (void)popAndPushWebView:(id)a0 animated:(BOOL)a1 extraData:(id)a2;
- (void)popAndPushVC:(id)a0 animated:(BOOL)a1;
- (void)startModalPageUI:(id)a0 animated:(BOOL)a1 extraData:(id)a2;
- (void)openLiteApp:(id)a0 extraData:(id)a1;
- (void)onCloseUI:(id)a0;
- (void)tinyAppDidClose:(id)a0;
- (void)liteAppDidClose:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, WKWebView, UIImage, NSHashTable;

@interface AWEOFGGeneralContainerService : HTSService <AWEOFGGeneralContainerService, DUXActionSheetDelegate>

@property (weak, nonatomic) WKWebView *webview;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UIImage *searchImgTempCache;
@property (retain, nonatomic) NSHashTable *containerList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)didActionSheetDismiss:(id)a0;
- (void)initServiceData;
- (id)longPressRootMenu:(id)a0 webview:(id)a1 config:(id)a2;
- (void)onLongPressImageInWebView:(id)a0 imageURL:(id)a1 config:(id)a2;
- (void)tryHideGeneralContainerRightNavBarButton:(id)a0;
- (BOOL)shouldHideRightNavBarButton:(id)a0;
- (void).cxx_destruct;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end

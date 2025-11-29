@class UIView, NSString, NSMutableDictionary, WebViewA8KeyLogicImpl, WebViewJSLogicImpl, NSMutableArray, BrandDebugCanvasTmplMsg;
@protocol WXCustomWebViewControllerDelegate, YYWebViewInterface;

@interface BrandDebugAdCanvasViewControllerMB : BrandDebugBaseViewControllerMB <UIScrollViewDelegate, BTCanvasItemCellViewModelDelegate, WXCustomWebViewControllerProtocol>

@property (retain, nonatomic) BrandDebugCanvasTmplMsg *tmpMsg;
@property (retain, nonatomic) NSMutableArray *arrItemModel;
@property (retain, nonatomic) NSMutableArray *arrItemCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *m_initUrl;
@property (retain, nonatomic) NSMutableDictionary *m_extraInfo;
@property (readonly, nonatomic) WebViewA8KeyLogicImpl *m_a8KeyLogicImpl;
@property (readonly, nonatomic) WebViewJSLogicImpl *m_jsLogicImpl;
@property (readonly, nonatomic) BOOL m_bOfflinePage;
@property (retain, nonatomic) UIView<YYWebViewInterface> *webView;
@property (nonatomic) BOOL m_bIsJsapiUploadVideoUploading;
@property (weak, nonatomic) id<WXCustomWebViewControllerDelegate> m_delegate;

- (void)viewDidLoad;
- (void)dealloc;
- (void)initItems;
- (void)onInsertCanvas;
- (id)testText;
- (void)setupTextLabelView;
- (void)onShowMemoryUsage;
- (id)memoryUsage;
- (void)setupCanvasContextVC;
- (void)resetCanvasContextVC;
- (void)pauseCanvasView;
- (void)resumeCanvasView;
- (void)onLaunchLogicJsEngine;
- (void)onLaunchRenderJsEngine;
- (void)onInsertFirstAdCard;
- (void)onInsertTemplatelAdMsg;
- (void)__insertTemplateTmplAdMsg:(id)a0;
- (id)getCurrentWebviewViewController;
- (BOOL)isMsgViewControllerInForground;
- (void)onCanvasHeightChange:(id)a0;
- (void)onCanvasItemClick:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)scrollViewDidScroll:(id)a0;
- (id)getInitUrl;
- (id)getCurrentUrl;
- (id)getCurrentAppId;
- (id)extraInfo;
- (unsigned int)getCurrentScene;
- (BOOL)allowScanQRCodeByImage;
- (BOOL)allowShareByImage;
- (BOOL)allowFayByImage;
- (void)enableWebContentImageLongPressingTag;
- (BOOL)allowImagePreview;
- (void)setDisableWebAlertView:(BOOL)a0;
- (void)doJsApiInitEvent;
- (void)forceShowCloseButton;
- (void)sendEventToJSBridge:(id)a0 Param:(id)a1;
- (void)startupPreVerifyJSAPI:(id)a0 failHandleBlock:(id /* block */)a1;
- (unsigned char)getPermissionWithName:(id)a0;
- (id)getShareUrl;
- (void)setWebViewContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)goToURL:(id)a0;
- (void).cxx_destruct;

@end

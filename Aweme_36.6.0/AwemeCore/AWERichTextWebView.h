@class NSString, UIImageView, IESWKWebView, AWEVideoPublishViewModel, UIView, AWERichTextJSBridge;
@protocol AWERichTextWebViewDelegate, BDXViewContainerProtocol, BDXKitViewProtocol, BDXWebViewProtocol;

@interface AWERichTextWebView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWERichTextJSBridge *richTextJSBridger;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;
@property (nonatomic) BOOL toolbarShowStatus;
@property (nonatomic) BOOL keyboardShowStatus;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxViewContainerView;
@property (retain, nonatomic) UIView<BDXKitViewProtocol> *kitView;
@property (retain, nonatomic) UIView<BDXWebViewProtocol> *bdxWebView;
@property (retain, nonatomic) IESWKWebView *webViewWK;
@property (weak, nonatomic) id<AWERichTextWebViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)wkWebViewBottomInset;

- (void)containerDidPageReady:(id)a0 sourceParam:(id)a1;
- (void)registerNotification;
- (void)fireEvent:(id)a0 params:(id)a1;
- (void)startTextEditing;
- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 webViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 publishModel:(id)a2;
- (void)stopTextEditing;
- (void)getContentCompletionBlock:(id /* block */)a0;
- (void)updateCurrentStyleWithModel:(id)a0;
- (void)fireEvent:(id)a0 params:(id)a1 completionBlock:(id /* block */)a2;
- (void)updateContentWithContent:(id)a0 hashTagList:(id)a1 hotSpotInfo:(id)a2;
- (void)updateContentWithContent:(id)a0 hashTagList:(id)a1;
- (void)configWithContainerViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 webFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)relativeKeyboardHeight;
- (double)relativeToolBarHeight;
- (double)relativeVisualWebViewHeight;
- (void)setUseCustomDummyInputAccessoryView;
- (long long)darkKeyboardAppearanceTemplateMethod;
- (long long)lightKeyboardAppearanceTemplateMethod;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)dealloc;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardDidHide;
- (void)keyboardWillChangeFrame:(id)a0;

@end

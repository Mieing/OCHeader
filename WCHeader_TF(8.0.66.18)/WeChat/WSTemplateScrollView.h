@class NSString, NSMutableArray, UIStackView;
@protocol WSWebViewPluginableProtocol;

@interface WSTemplateScrollView : UIScrollView <WeChat.WSTemplateCommandExt, WSTemplateEventObserver>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSMutableArray *templateContainers;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } newlifeTabArea;
@property (readonly, nonatomic) id<WSWebViewPluginableProtocol> curWebviewContainer;
@property (nonatomic) unsigned long long curIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTemplateConfigs:(id)a0;
- (void)initViewWithConfigs:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)initAllWebviewsIfNeed;
- (void)enumerateWebviewOwnerUsingBlock:(id /* block */)a0;
- (void)scrollRectToPage:(unsigned long long)a0 animated:(BOOL)a1;
- (void)onTabTemplateContainerAppear:(id)a0;
- (void)onTabTemplateContainerDisappear:(id)a0;
- (id)getTemplateContainerVC:(id)a0;
- (void)loadContentForTabIfNeed:(unsigned long long)a0;
- (void)enterWSWebView;
- (void)didEnterWSWebView;
- (void)quitWSWebView;
- (void)templateWillDisappear;
- (void)templateDidDisappear;
- (void)templateAppear;
- (void)onStartRenderWithTagId:(long long)a0;
- (void)onSetFlutterTabAreaWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onSetScrollable:(BOOL)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)onUpdateLocalJSTemplateForBizType:(unsigned long long)a0;
- (void).cxx_destruct;

@end

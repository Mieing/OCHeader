@class ScanGoodsJSHandler, NSString, WSWebViewPluginScheduler, UIView, MMUIButton, WSTemplateLogicController;

@interface ScanGoodsHalfScreenViewController : MMUIHalfScreenViewController <WSWebViewPluginableProtocol> {
    NSString *_reqKey;
    WSTemplateLogicController *m_logicController;
    ScanGoodsJSHandler *m_jsHandler;
    BOOL _hasAddObservers;
    BOOL _isBeDismissed;
    BOOL _bInNodifyViewTopChanging;
    unsigned int _notifyViewTopChangeCount;
    unsigned int _enterSessionID;
    unsigned int _tabSessionID;
    unsigned int _scanSessionID;
    MMUIButton *_closeButton;
}

@property (copy, nonatomic) NSString *detectSessionId;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) unsigned int resultOpenScene;
@property (weak, nonatomic) UIView *customView;
@property (weak, nonatomic) UIView *customViewSuperView;
@property (nonatomic) struct CGPoint { double x; double y; } customViewPoint;
@property (nonatomic) unsigned long long customViewIndex;
@property (weak, nonatomic) UIView *customMaskView;
@property (weak, nonatomic) UIView *customMaskSuperView;
@property (nonatomic) unsigned long long customMaskIndex;
@property (retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReqKey:(id)a0 enterSessionID:(unsigned int)a1 tabSessionID:(unsigned int)a2 scanSessionID:(unsigned int)a3;
- (id)initWithReqKey:(id)a0 enterSessionID:(unsigned int)a1 tabSessionID:(unsigned int)a2 scanSessionID:(unsigned int)a3 detectSessionID:(id)a4 openScene:(unsigned int)a5 preload:(BOOL)a6;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidBePresented:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (id)pathForTestTemplate;
- (void)initData;
- (void)initView;
- (BOOL)hidesStatusBar;
- (id)closeButton;
- (void)setupAnimateTransitionBlocks;
- (void)notifyContentViewTopChangeEventStartY:(double)a0 endY:(double)a1 timeOnce:(double)a2 repeatCount:(unsigned int)a3;
- (BOOL)needCloseOnOrientationChanged;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (unsigned long long)localJSBizType;
- (void)setCloseButton:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, NSDictionary, IESLiveRevenueInteractLynxComponentView, UIView, NSArray, IESLiveRevenueInteractLynxComponentConfig;
@protocol IESHYContainerProtocol;

@interface IESLiveRevenueInteractLynxComponent : NSObject <IESHYHybridViewLifecycleProtocol, IESLiveRevenueInteractLynxDataSubscriber>

@property (retain, nonatomic) IESLiveRevenueInteractLynxComponentView *componentView;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *componentViewNew;
@property (retain, nonatomic) IESLiveRevenueInteractLynxComponentConfig *config;
@property (copy, nonatomic) NSDictionary *urlParams;
@property (nonatomic) double loadStartTime;
@property (nonatomic) unsigned long long scene;
@property (readonly, copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSArray *observer;
@property (copy, nonatomic) NSDictionary *extraUrlParams;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (double)componentViewHeight;
- (void)sendEvent:(id)a0 extraParams:(id)a1;
- (void)updateLayoutWithConfig:(id)a0;
- (id)interactProvider;
- (void)onReceiveDataChange:(id)a0 withTag:(id)a1;
- (void)setupURLParams;
- (BOOL)enableAnniexCardNew;
- (void)setupViewNew;
- (void)setupContainerIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })componentFrame;
- (void)bringViewToFrontIfNeeded;
- (void)addViewToContainer;
- (void)notifyLynxInformationWithParams:(id)a0;
- (double)componentViewWidth;
- (double)componentViewMarginLeft;
- (double)componentViewMarginRight;
- (double)componentViewMarginTop;
- (double)componentViewMarginBottom;
- (id)initWithDIContext:(id)a0 scene:(unsigned long long)a1 config:(id)a2;
- (void)updateObserverConfig:(id)a0;
- (void)containerFrameChanged;
- (void)notifyLynxInformationByType:(id)a0 data:(id)a1;
- (void)unload;
- (void)load;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerFrame;
- (id)containerView;
- (void)dealloc;
- (void)setupView;

@end

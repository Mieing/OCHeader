@class NSString, AWEPageContext, AWEProgressViewPresenter, AWEProgressUIConfig, UIView;
@protocol AWEProgressElementDelegate, AWEProgressContainerViewProtocol, AWEProgressContextProtocol, AWEProgressFakeViewProtocol;

@interface AWEProgressViewElement : AWEBaseElement <AWEProgressElementDelegate, AWEProgressElementProtocol>

@property (retain, nonatomic) UIView<AWEProgressContainerViewProtocol> *progressContainerView;
@property (retain, nonatomic) AWEProgressViewPresenter *progressPresenter;
@property (retain, nonatomic) UIView<AWEProgressFakeViewProtocol> *fakeProgressView;
@property (retain, nonatomic) AWEProgressUIConfig *config;
@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEProgressElementDelegate> delegate;

+ (Class)aAWEPadModuleAdapterClass;

- (void)initializeElement;
- (id)initWithConfig:(id)a0 context:(id)a1;
- (id)aAWEPadModuleAdapter;
- (void)viewDidDisposed;
- (void)progressValueChangedTo:(double)a0 animated:(BOOL)a1;
- (void)addLeftEdgeInsetIfNeed:(double)a0 bizType:(unsigned long long)a1;
- (void)progressViewTouchBeganWithStart:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)progressViewTouchChangedWithLastPoint:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)progressViewTouchEndedWithEndPoint:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)changeProgressStatusTo:(unsigned long long)a0 withAction:(unsigned long long)a1 animate:(BOOL)a2;
- (void)progressWillBeginDraggingWithType:(unsigned long long)a0 startValue:(double)a1;
- (void)progressValueWillBeChangedFrom:(double)a0 to:(double)a1 triggerMethod:(unsigned long long)a2;
- (void)progressReleaseDragging:(unsigned long long)a0 endValue:(double)a1 extraInfo:(id)a2;
- (BOOL)shouldRecognizeProgressViewGesture;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)configuration;
- (void)reset;
- (void)viewDidLoad;

@end

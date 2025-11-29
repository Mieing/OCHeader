@class NSString, AWEElementContainer, AWEPageContext, AWEAwemeModel;
@protocol AWEProgressElementContainerProtocol, AWEProgressContextProtocol, AWEProgressViewControllerDelegate, AWEProgressControllerPresenterProtocol, AWEProgressStatusAdapterProtocol;

@interface AWEProgressCommonViewController : UIViewController <AWEProgressElementDelegate, AWEProgressControllerPresenterDelegate, AWEProgressViewControllerProtocol>

@property (retain, nonatomic) AWEElementContainer<AWEProgressElementContainerProtocol> *elementContainer;
@property (retain, nonatomic) id<AWEProgressControllerPresenterProtocol> presenter;
@property (retain, nonatomic) id<AWEProgressStatusAdapterProtocol> statusAdapter;
@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (nonatomic) BOOL isSliding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEProgressViewControllerDelegate> delegate;
@property (readonly, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL disableProgressGesture;

- (void)changeStatusWithAction:(unsigned long long)a0 animate:(BOOL)a1;
- (void)isImmersionMode:(BOOL)a0;
- (void)progressValueChangedTo:(double)a0 animated:(BOOL)a1;
- (void)addLeftEdgeInsetIfNeed:(double)a0 bizType:(unsigned long long)a1;
- (void)progressViewTouchBeganWithStart:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)progressViewTouchChangedWithLastPoint:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)progressViewTouchEndedWithEndPoint:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)progressValueChangedWithStatus:(unsigned long long)a0 triggerMethod:(unsigned long long)a1 percentage:(double)a2 extraInfo:(id)a3;
- (void)progressStatusChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1 withAction:(unsigned long long)a2 animate:(BOOL)a3;
- (void)progressWillBeginDraggingWithType:(unsigned long long)a0 startValue:(double)a1;
- (void)progressValueWillBeChangedFrom:(double)a0 to:(double)a1 triggerMethod:(unsigned long long)a2;
- (void)progressReleaseDragging:(unsigned long long)a0 endValue:(double)a1 extraInfo:(id)a2;
- (Class)elementContainerClass;
- (Class)presenterClass;
- (Class)statusAdapterClass;
- (BOOL)shouldRecognizeProgressViewGesture;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (Class)contextClass;
- (id)progressSlider;

@end

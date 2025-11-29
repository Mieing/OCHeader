@class NSString, AWEProgressViewUIConfig, AWEPageContext, UIView, AWEProgressUIConfig;
@protocol AWEProgressElementDelegate, AWEProgressContainerViewProtocol, AWEProgressFakeViewProtocol, AWEProgressContextProtocol;

@interface AWEProgressViewPresenter : NSObject <AWEProgressContainerViewDelegate, AWEProgressStatusProtocol, AWEProgressChangeProtocol, AWEProgressGestureProtocol, AWEProgressElementBizProtocol>

@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (retain, nonatomic) AWEProgressUIConfig *config;
@property (retain, nonatomic) UIView<AWEProgressContainerViewProtocol> *progressView;
@property (retain, nonatomic) UIView<AWEProgressFakeViewProtocol> *fakeSlider;
@property (nonatomic) unsigned long long currentStatus;
@property (nonatomic) unsigned long long currentAction;
@property (nonatomic) BOOL shouldAnimateWhenChangeStatus;
@property (retain, nonatomic) AWEProgressViewUIConfig *progressViewUIConfig;
@property (nonatomic) unsigned long long triggerType;
@property (nonatomic) struct CGPoint { double x; double y; } startLocation;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) double startPercentage;
@property (nonatomic) double lastPercentage;
@property (nonatomic) double lastMapSliderValue;
@property (nonatomic) double additionalLeftEdgeInset;
@property (weak, nonatomic) id<AWEProgressElementDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)progressValueChangedTo:(double)a0 animated:(BOOL)a1;
- (void)addLeftEdgeInsetIfNeed:(double)a0 bizType:(unsigned long long)a1;
- (void)progressViewTouchBeganWithStart:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)progressViewTouchChangedWithLastPoint:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)progressViewTouchEndedWithEndPoint:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)restoreToNormalWhenTouchEnd:(BOOL)a0;
- (void)changeProgressStatusTo:(unsigned long long)a0 withAction:(unsigned long long)a1 animate:(BOOL)a2;
- (BOOL)shouldBeginProgressGestureRecognizer:(id)a0;
- (id)initWithTargeView:(id)a0 fakeSlider:(id)a1 UIConfig:(id)a2 context:(id)a3;
- (void)configProgressView;
- (void)updateSliderEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (double)verifiedPercentage:(double)a0;
- (void)changeFakeSliderStatus;
- (void)showFakeSliderIfNeeded:(BOOL)a0;
- (void)remakePadFakeSliderForCommonViewConstraint;
- (void).cxx_destruct;
- (void)reset;

@end

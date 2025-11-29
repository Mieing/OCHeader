@class UIViewController, NSString, AWEPageContext, AWEProgressStatusConfig;
@protocol AWEProgressContextProtocol, AWEProgressViewControllerProtocol, AWEProgressStatusAdapterProtocol, AWEProgressControllerPresenterDelegate;

@interface AWEProgressControllerPresenter : NSObject <AWEProgressControllerPresenterProtocol>

@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (retain, nonatomic) id<AWEProgressStatusAdapterProtocol> adapter;
@property (retain, nonatomic) AWEProgressStatusConfig *currentStatusConfig;
@property (retain, nonatomic) AWEProgressStatusConfig *formerStatusConfig;
@property (nonatomic) double currentProcess;
@property (nonatomic) double timeOutToDefault;
@property (nonatomic) double slidingTime;
@property (nonatomic) double lastSeekTime;
@property (nonatomic) BOOL isImmersionMode;
@property (weak, nonatomic) UIViewController<AWEProgressViewControllerProtocol> *progressVC;
@property (weak, nonatomic) id<AWEProgressControllerPresenterDelegate> delegate;
@property (readonly, nonatomic) unsigned long long currentStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)tryConsumeGesture;
- (void)changeStatusWithAction:(unsigned long long)a0 animate:(BOOL)a1;
- (void)isImmersionMode:(BOOL)a0;
- (void)progressWillBeginDraggingWithType:(unsigned long long)a0 startValue:(double)a1;
- (void)progressValueWillBeChangedFrom:(double)a0 to:(double)a1 triggerMethod:(unsigned long long)a2;
- (void)progressReleaseDragging:(unsigned long long)a0 endValue:(double)a1 extraInfo:(id)a2;
- (id)initWithContext:(id)a0 statusAdapter:(id)a1;
- (id)nextStatusWithAction:(unsigned long long)a0 defaultStatus:(unsigned long long)a1;
- (void)changeToStatusIfNeed:(id)a0;
- (unsigned long long)progressActionTypeWithTriggerMethod:(unsigned long long)a0 valueChangeStatus:(unsigned long long)a1;
- (void)changeToStatus:(id)a0;
- (void)changeProgressStatus;
- (void).cxx_destruct;

@end

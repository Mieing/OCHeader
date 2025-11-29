@class NSString, NSArray, MMLiveViewController, MMLiveTask, MMLiveTaskId, OrderedDictionary, NSMutableDictionary;

@interface MMLiveBaseComponentView : MMIndexedContainerView

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) MMLiveTask *liveTask;
@property (retain, nonatomic) NSString *componentKey;
@property (weak, nonatomic) MMLiveBaseComponentView *parentComponentView;
@property (retain, nonatomic) OrderedDictionary *components;
@property (retain, nonatomic) NSMutableDictionary *layoutDependentKeys;
@property (readonly, weak, nonatomic) MMLiveViewController *liveViewController;
@property (readonly, nonatomic) NSArray *subComponents;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1 componentKey:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andLiveTask:(id)a1 componentKey:(id)a2;
- (void)layoutSubviews;
- (BOOL)addSubComponent:(id)a0 layoutDependentKeys:(id)a1;
- (BOOL)removeSubComponent:(id)a0;
- (BOOL)removeFromParentComponent;
- (void)onSubComponentLayoutChanged:(id)a0;
- (id)subComponentForKey:(id)a0;
- (void)layoutUI;
- (void)onPrepareLive;
- (void)onCreateLive;
- (void)onEnterLive;
- (void)onEnterLiveWithError:(id)a0;
- (void)onLiveUpdated;
- (void)onLivePaused;
- (void)onLiveResumed;
- (void)onLiveQualityUpdated:(id)a0;
- (void)onLiveProgressUpdated:(unsigned int)a0;
- (void)onExitLive;
- (void)visibilityChanged:(BOOL)a0 invokeType:(unsigned long long)a1;
- (void)onCameraCastConnectionChanged:(BOOL)a0;
- (void).cxx_destruct;

@end

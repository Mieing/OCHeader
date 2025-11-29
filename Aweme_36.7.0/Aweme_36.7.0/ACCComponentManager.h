@class NSMapTable, NSMutableDictionary, NSString, NSArray, NSMutableArray;
@protocol ACCComponentManagerLoadPhaseDelegate, ACCComponentLogDelegate, ACCFeatureComponent;

@interface ACCComponentManager : NSObject <ACCComponentManager>

@property (retain, nonatomic) NSMutableArray *loadedComponents;
@property (retain, nonatomic) NSMutableDictionary *loadPhaseMap;
@property (retain, nonatomic) NSMapTable *lifeCycleBindings;
@property (retain, nonatomic) NSMutableArray *mountCompletions;
@property (nonatomic) unsigned long long mountState;
@property (nonatomic) unsigned long long viewState;
@property (nonatomic) BOOL isStartMonitorMemory;
@property (copy, nonatomic) NSString *memoryContext;
@property (retain, nonatomic) id<ACCFeatureComponent> componentsProxy;
@property (retain, nonatomic) id<ACCFeatureComponent> loadStateComponentsProxy;
@property (retain, nonatomic) NSMutableArray *allComponents;
@property (weak, nonatomic) id<ACCComponentLogDelegate> delegate;
@property (weak, nonatomic) id<ACCComponentManagerLoadPhaseDelegate> loadPhaseDelegate;
@property (readonly, nonatomic) NSArray *componentList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)loadStateWithComponent:(id)a0;

- (void)bindLife:(id)a0 with:(id)a1;
- (void)prepareForViewDidLoad;
- (void)prepareForWillAppear;
- (void)prepareForDidAppear;
- (void)prepareForWillDisappear;
- (void)prepareForDidDisappear;
- (void)prepareApplicationDidChangeStatusBarOrientation;
- (void)prepareForViewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)prepareForReceiveMemoryWarningWithType:(unsigned long long)a0;
- (void)prepareForUnmount;
- (void)unmountComponents;
- (void)registerMountCompletion:(id /* block */)a0;
- (void)registerLoadViewCompletion:(id /* block */)a0;
- (void)loadComponentOfPhase:(unsigned long long)a0;
- (void)performComponent:(id)a0 selector:(SEL)a1;
- (void)performLifeCycleSelector:(SEL)a0;
- (id)loadPhases;
- (void)handleComponentAppearEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addComponent:(id)a0;

@end

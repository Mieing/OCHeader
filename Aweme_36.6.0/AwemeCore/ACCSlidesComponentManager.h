@class NSMapTable, NSMutableDictionary, NSString, NSSet, NSMutableArray, NSArray;
@protocol ACCComponentManagerLoadPhaseDelegate, ACCComponentLogDelegate, ACCFeatureComponent;

@interface ACCSlidesComponentManager : NSObject <ACCComponentManager>

@property (retain, nonatomic) NSMutableArray *loadedComponents;
@property (retain, nonatomic) NSMutableDictionary *loadPhaseMap;
@property (retain, nonatomic) NSMapTable *lifeCycleBindings;
@property (retain, nonatomic) NSMutableArray *mountCompletions;
@property (retain, nonatomic) NSMutableArray *loadViewCompletions;
@property (retain, nonatomic) NSMutableArray *allComponents;
@property (nonatomic) unsigned long long mountState;
@property (nonatomic) unsigned long long viewState;
@property (nonatomic) BOOL isStartMonitorMemory;
@property (copy, nonatomic) NSString *memoryContext;
@property (nonatomic) BOOL forceLoaded;
@property (nonatomic) unsigned long long currentLoadPhase;
@property (retain, nonatomic) NSSet *allowListSelectorWhenUnmounted;
@property (retain, nonatomic) id<ACCFeatureComponent> componentsProxy;
@property (retain, nonatomic) id<ACCFeatureComponent> loadStateComponentsProxy;
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
- (void)loadComponentsView;
- (void)finishFirstRenderTask;
- (void)forceLoadComponentsWhenInteracting;
- (void)loadComponentOfPhase:(unsigned long long)a0;
- (void)performComponent:(id)a0 selector:(SEL)a1;
- (void)performLifeCycleSelector:(SEL)a0;
- (id)loadPhases;
- (void)handleComponentAppearEvent:(id)a0;
- (void)doLoadTask;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addComponent:(id)a0;

@end

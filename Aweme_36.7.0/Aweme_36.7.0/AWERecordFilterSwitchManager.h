@class NSString, NSArray, CADisplayLink, NSHashTable, IESEffectModel, AWECameraFilterConfiguration, UIPanGestureRecognizer;
@protocol AWERecordFilterSwitchProtocol;

@interface AWERecordFilterSwitchManager : NSObject <UIGestureRecognizerDelegate>

@property (copy, nonatomic) NSArray *filterArray;
@property (retain, nonatomic) AWECameraFilterConfiguration *filterConfiguration;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (retain, nonatomic) NSHashTable *panGesExcludeViews;
@property (retain, nonatomic) IESEffectModel *currentFilter;
@property (retain, nonatomic) IESEffectModel *switchToFilter;
@property (nonatomic) long long switchFilterDirection;
@property (nonatomic) BOOL filterAniTiming;
@property (nonatomic) double autoRenderProgress;
@property (nonatomic) BOOL isCompeleteWhenFilterAniBegin;
@property (nonatomic) BOOL isSwitchFilter;
@property (nonatomic) BOOL reloadFilterPanelWhenFinishSwitching;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) id<AWERecordFilterSwitchProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePanGestureEnabled:(BOOL)a0;
- (void)panSwitchFilter:(id)a0;
- (void)finishCurrentSwitchProcess;
- (void)startSwitchDisplayLink;
- (void)stopSwitchDisplayLink;
- (void)refreshCurrentFilterModelWithFilter:(id)a0;
- (void)addPanGesExcludedView:(id)a0;
- (void)reloadFilterArrayIfNecessary;
- (void)reloadFilterArray;
- (void)p_preloadFiltersIfNeed;
- (void)changeFilterRelatedUIWithProgress:(double)a0;
- (void)applyFilterWithBeginProgress:(double)a0 isCompelete:(BOOL)a1;
- (void)applyFilterWithBeginProgress:(double)a0 isCompelete:(BOOL)a1 showFilterName:(BOOL)a2;
- (void)refreshFiltterSwitchingDisplay;
- (void)renderOnMainLoop;
- (void)addFilterSwitchGestureForViewController:(id)a0 filterArray:(id)a1 filterConfiguration:(id)a2;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)reset;
- (void)dealloc;

@end

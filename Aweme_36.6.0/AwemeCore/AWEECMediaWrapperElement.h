@class AWEAwemeModel, NSString, NSArray, AWEECMediaWrapperProductTransitionOuterContextProviderImpl, NSTimer, CALayer, NSDictionary, AWEECMediaWrapperLiveTransitionOuterContextProviderImpl, CAShapeLayer, AWEECMediaWrapperFadeOutTransitionContextProviderImpl, UIView;

@interface AWEECMediaWrapperElement : LynxUI <AWEAwemeDetailTableViewControllerDelegate, AWEZoomTransitionOuterContextProvider>

@property (retain, nonatomic) AWEAwemeModel *singleAwemeModel;
@property (copy, nonatomic) NSString *mallLiveData;
@property (copy, nonatomic) NSDictionary *liveRoomRawDictionary;
@property (nonatomic) BOOL isEnterRoom;
@property (retain, nonatomic) AWEECMediaWrapperLiveTransitionOuterContextProviderImpl *liveTransitionOuterContextProvider;
@property (retain, nonatomic) AWEECMediaWrapperFadeOutTransitionContextProviderImpl *fadeOutTransitionContextProvider;
@property (retain, nonatomic) AWEECMediaWrapperProductTransitionOuterContextProviderImpl *productTransitionOuterContextProvider;
@property (copy, nonatomic) NSArray *radiusList;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) CALayer *whiteLayer;
@property (retain, nonatomic) CAShapeLayer *whiteMask;
@property (nonatomic) long long maskHeight;
@property (nonatomic) BOOL startMonitorFrame;
@property (weak, nonatomic) UIView *homeView;
@property (copy, nonatomic) NSString *transitionElementId;
@property (copy, nonatomic) NSString *transitionItemId;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL inTransition;
@property (copy, nonatomic) NSString *mediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeModelFromVideoDataDictionary:(id)a0;
+ (id)__lynx_prop_config__4490;
+ (id)__lynx_prop_config__4571;
+ (id)__lynx_prop_config__4812;
+ (id)__lynx_ui_method_config__4953;
+ (id)__lynx_ui_method_config__5394;
+ (id)__lynx_ui_method_config__5615;
+ (id)__lynx_prop_config__5806;
+ (id)__lynx_prop_config__5947;
+ (id)__lynx_prop_config__5998;
+ (id)__lynx_prop_config__6049;
+ (id)__lynx_prop_config__60910;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)zoomTransitionWantsTabBarAnimation;
- (BOOL)zoomTransitionWantsTabBarBeStatic;
- (BOOL)zoomTransitionWantsStaticTabBarAtTopLayer;
- (void)onListCellDisappear:(id)a0 exist:(BOOL)a1 withList:(id)a2;
- (void)aweme:(id)a0 requestReset:(BOOL)a1;
- (void)enterDetail:(id)a0 withResult:(id /* block */)a1;
- (void)mallUpdateFilters:(id)a0;
- (id)findECLynxElement:(id)a0 withCondition:(id /* block */)a1;
- (void)liveTransitionWith:(id)a0;
- (void)reportSchemaDiff:(id)a0 outSchema:(id)a1 globalParams:(id)a2;
- (id)__findElementIn:(id)a0 elementCls:(Class)a1;
- (BOOL)__isCurrentDisplayedInScreen;
- (void)enterVideoDetailWithParams:(id)a0 callBack:(id /* block */)a1;
- (void)enterLiveRoomWithParams:(id)a0 callBack:(id /* block */)a1;
- (void)enterProductDetailWithParams:(id)a0 callBack:(id /* block */)a1;
- (void)setupMaskWithParams:(id)a0;
- (void)removeMaskView;
- (void)mediatype:(id)a0 requestReset:(BOOL)a1;
- (void)livedata:(id)a0 requestReset:(BOOL)a1;
- (void)videodata:(id)a0 requestReset:(BOOL)a1;
- (void)showGlobalMask:(id)a0 withResult:(id /* block */)a1;
- (void)hideGlobalMask:(id)a0 withResult:(id /* block */)a1;
- (void)transition_element_id:(id)a0 requestReset:(BOOL)a1;
- (void)transition_item_id:(id)a0 requestReset:(BOOL)a1;
- (void)corner_radius:(double)a0 requestReset:(BOOL)a1;
- (void)radius_list:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createView;
- (void)frameDidChange;

@end

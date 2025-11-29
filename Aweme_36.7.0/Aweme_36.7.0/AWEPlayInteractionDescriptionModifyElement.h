@class AWEPlayInteractionDescriptionContext, AWEPlayInteractionDescriptionRenderer, NSString, AWEPlayInteractionDescriptionElementConfig, AWEPlayInteractionDescriptionParsersManager, AWEPlayInteractionDescriptionElementViewModel, AWEPlayInteractionDescriptionControllerDispatcherManager, UIScrollView;
@protocol AWEPlayInteractionDescriptionScrollViewProtocol;

@interface AWEPlayInteractionDescriptionModifyElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol, AWEElementStrategiesProtocol, AWEPlayInteractionDescriptionElementProtocol>

@property (retain, nonatomic) AWEPlayInteractionDescriptionParsersManager *parsersManager;
@property (retain, nonatomic) AWEPlayInteractionDescriptionRenderer *renderer;
@property (retain, nonatomic) AWEPlayInteractionDescriptionElementViewModel *elementViewModel;
@property (retain, nonatomic) AWEPlayInteractionDescriptionControllerDispatcherManager *dispatchManager;
@property (retain, nonatomic) AWEPlayInteractionDescriptionContext *descriptionContext;
@property (retain, nonatomic) AWEPlayInteractionDescriptionElementConfig *elementConfig;
@property (nonatomic) BOOL needDelayRender;
@property (retain, nonatomic) AWEPlayInteractionDescriptionParsersManager *relatedParsersManager;
@property (nonatomic) BOOL isDidDisplayCompletion;
@property (nonatomic) BOOL hasTrackShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIScrollView<AWEPlayInteractionDescriptionScrollViewProtocol> *descriptionScrollView;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)isDescriptionHideWithData:(id)a0 context:(id)a1;
+ (BOOL)isAdDescriptionHideWithData:(id)a0 context:(id)a1;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisappear;
- (void)viewController_viewDidDisappear;
- (void)setAppear:(BOOL)a0;
- (void)videoPlayerWillTrackPlayTime;
- (void)expandDescTextWithParams:(id)a0;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)useMaskLayerStringIfNeed;
- (long long)foldRow;
- (void)onCommentAddNotification:(id)a0;
- (void)onAWEAwemeDeleteNotification:(id)a0;
- (void)renderElement;
- (void)configWithStrategies:(id)a0;
- (void)didDisplayDescriptionElement;
- (void)descriptionLabelDidClickIsExpand:(BOOL)a0;
- (void)onCommentTransferToCaptionNotification:(id)a0;
- (void)delayRenderForLayoutElementViewIfNeed;
- (void)updateDescriptionContext;
- (void)reRenderElement;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end

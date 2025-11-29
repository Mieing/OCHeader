@class BUPlayableLynxKryptonVideoPlayerFactory, NSMutableDictionary, NSString, AWEAwemeModel, NSDate, NSMutableArray, UIViewController;
@protocol AWEAdUniversalJSBridgeContainerProtocol, AWEPlayInteractionViewControllerProtocol, KryptonVideoPlayerService;

@interface AWEAdUniversalJSBridgeManager : NSObject <AWEAdJSBExecuteProtocol>

@property (retain, nonatomic) NSMutableArray *leftElements;
@property (retain, nonatomic) NSMutableDictionary *elementsDic;
@property (weak, nonatomic) id<AWEAdUniversalJSBridgeContainerProtocol> container;
@property (nonatomic) BOOL hasReset;
@property (retain, nonatomic) NSDate *showDate;
@property (nonatomic) BOOL hasDynamicFlashTimer;
@property (nonatomic) long long videoLoopCount;
@property (copy, nonatomic) id /* block */ longPressPanelShowHandler;
@property (copy, nonatomic) id /* block */ longPressPanelDismissHandler;
@property (copy, nonatomic) id /* block */ feedShowCommentPanelHandler;
@property (copy, nonatomic) id /* block */ feedCommentPanelDismissHandler;
@property (copy, nonatomic) id /* block */ sharePanelShowHandler;
@property (copy, nonatomic) id /* block */ sharePanelDismissHandler;
@property (copy, nonatomic) id /* block */ showAdOperationGuideHandler;
@property (copy, nonatomic) id /* block */ closeAdOperationGuideHandler;
@property (copy, nonatomic) id /* block */ bottomBrightnessUpdateHandler;
@property (copy, nonatomic) id /* block */ likeEggShowHandler;
@property (copy, nonatomic) id /* block */ jsbExecuteHandler;
@property (retain, nonatomic) NSMutableArray *jsbExecuteEvents;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionViewController;
@property (retain, nonatomic) BUPlayableLynxKryptonVideoPlayerFactory<KryptonVideoPlayerService> *videoPlayerFactory;
@property (nonatomic) BOOL isPageVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 componentId:(id)a1 params:(id)a2 callback:(id /* block */)a3;
- (id)lynxBridges;
- (double)adVisibleTime;
- (id)initWithViewController:(id)a0 model:(id)a1 container:(id)a2;
- (void)adRegisterWithDuration:(long long)a0 adComponent:(id)a1;
- (void)checkJSBExecuteEvent:(double)a0;
- (void)notifyIsReadyWithDuration:(long long)a0 canRepeat:(BOOL)a1 adComponent:(id)a2;
- (void)onAwemeDiggNotification:(id)a0;
- (void)onAddCommentNotification:(id)a0;
- (void)sendOnPanelShowEvent:(BOOL)a0 type:(long long)a1;
- (BOOL)nativeInfoAreaAnimationFix;
- (void)hideNativeInfoArea:(id)a0 animationType:(long long)a1;
- (void)hideNativeInfoArea:(id)a0;
- (void)showNativeInfoArea:(id)a0 alwaysShowArea:(BOOL)a1;
- (void)adRegisterWithTime:(id)a0 adComponent:(id)a1;
- (void)showNativeInfoArea:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;
- (void)addObservers;

@end

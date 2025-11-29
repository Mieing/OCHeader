@class AWEPlayInteractionBottomButtonPlayletGuidanceComponentContainerView, NSString, AWEPlayInteractionContext, AWEPageContext, AWEVideoProductTipsTagView, AWEEntertainmentMultipleEventsView, AWEPlayInteractionBottomButtonPlayletGuidanceAnimationView, AWECommonButtonInfoModel;
@protocol AWEShowShrinkTransitionWrapperProtocol, AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonComponentDelegateProtocol;

@interface AWEPlayInteractionBottomButtonPlayletGuidanceComponent : NSObject <AWEPlayInteractionBottomButtonComponentProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) AWEPlayInteractionBottomButtonPlayletGuidanceComponentContainerView *containerView;
@property (retain, nonatomic) AWEEntertainmentMultipleEventsView *multipleEventsView;
@property (retain, nonatomic) AWEVideoProductTipsTagView *tipsTagView;
@property (nonatomic) BOOL cancelledAutoEnterInnerFeed;
@property (nonatomic) double lastPlayBackTime;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) long long cancelTimes;
@property (retain, nonatomic) AWEPlayInteractionBottomButtonPlayletGuidanceAnimationView *guidanceAnimationView;
@property (nonatomic) BOOL singleBottomButtonIsAnimated;
@property (nonatomic) BOOL singleBottomButtonIsHighlighted;
@property (retain, nonatomic) id<AWEShowShrinkTransitionWrapperProtocol> shrinkTransitionWrapper;
@property (nonatomic) long long avoidStatus;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentDelegateProtocol> componentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;
+ (id)buttonAttributedStringWithPrefixText:(id)a0 richText:(id)a1;
+ (id)tipsAttributedStringWithRichText:(id)a0;

- (id)initWithModel:(id)a0 context:(id)a1;
- (long long)activateType;
- (void)viewController_willDisplay;
- (void)cancelClick;
- (void)showSingleBottomButton;
- (void)switchStateIfNeeded;
- (BOOL)autoEnterEnableForAwemeModel:(id)a0;
- (void)enterInnerFeedAuto:(BOOL)a0;
- (void)highlightSingleBottomButtonIfNeeded;
- (BOOL)animatedEnable;
- (void)startAnimationForSingleBottomButtonIfNeeded;
- (BOOL)switchStateEnableForAwemeModel:(id)a0;
- (long long)switchCountDownSecondsForAwemeModel:(id)a0;
- (BOOL)enableForOtherPanels;
- (void)showAutoEnterBottomButtonWithCountDownSeconds:(long long)a0;
- (void)showAnimationSingleBottomButton;
- (void)showDefaultSingleBottomButton;
- (void)updateAnimationTime;
- (id)normalStateContentStringForAwemeModel:(id)a0;
- (id)autoEnterStateContentStringForAwemeModel:(id)a0 countDownSeconds:(long long)a1;
- (void)goToInnerFeedWithSchema:(id)a0 nextEpisode:(BOOL)a1 enterMethod:(id)a2;
- (void)freeWatchInInnerFeedWithButtonInfo:(id)a0;
- (void)trackCancelClick;
- (void)enterPlayletWithModel:(id)a0 schema:(id)a1 enterMethod:(id)a2;
- (void)fastEnterPlayletWithModel:(id)a0 schema:(id)a1 needTransition:(BOOL)a2 enterMethod:(id)a3;
- (void)schemaEnterPlayletWithSchema:(id)a0 enterMethod:(id)a1;
- (id)showTrackerRegisterParams;
- (void).cxx_destruct;
- (void)setup;
- (id)buttonView;
- (void)addObservers;

@end

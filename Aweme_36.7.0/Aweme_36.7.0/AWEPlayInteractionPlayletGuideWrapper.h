@class AWEPlayInteractionViewController, NSString, AWEPlayInteractionContext, AWEAwemeModel, AWEFeedPlayletGuideButtonView;
@protocol AWEPlayInteractionPlayletGuideWrapperDelegate;

@interface AWEPlayInteractionPlayletGuideWrapper : NSObject <AWEPlayInteractionPlayletGuideWrapperProtocol>

@property (retain, nonatomic) AWEFeedPlayletGuideButtonView *guideButtonView;
@property (nonatomic) BOOL cancelledAutoEnterInnerFeed;
@property (nonatomic) double lastPlayBackTime;
@property (readonly, nonatomic) AWEPlayInteractionContext *context;
@property (readonly, nonatomic) AWEPlayInteractionViewController *container;
@property (readonly, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ getContext;
@property (copy, nonatomic) id /* block */ getContainer;
@property (copy, nonatomic) id /* block */ getModel;
@property (weak, nonatomic) id<AWEPlayInteractionPlayletGuideWrapperDelegate> wrapperDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonAttributedStringWithPrefixText:(id)a0 richText:(id)a1;
+ (double)widthForGuideButtonViewWithAttributedString:(id)a0;

- (void)didEndDisplayingBeforeReset;
- (void)addGuideButtonWithView:(id)a0;
- (void)elementWillDisplayGuideButtonView;
- (void)elementDidEndDisplaying;
- (void)switchStateIfNeeded;
- (BOOL)autoEnterEnableForAwemeModel:(id)a0;
- (void)enterInnerFeedAuto:(BOOL)a0;
- (BOOL)switchStateEnableForAwemeModel:(id)a0;
- (long long)switchCountDownSecondsForAwemeModel:(id)a0;
- (BOOL)enableForOtherPanels;
- (id)autoEnterStateContentStringForAwemeModel:(id)a0 countDownSeconds:(long long)a1;
- (void)freeWatchInInnerFeedWithButtonInfo:(id)a0;
- (void)willDisplayWithView:(id)a0;
- (void)showNormalState;
- (void)pushNewVCResetState;
- (BOOL)needDisplayGuideButtonView;
- (void)guideButtonClick;
- (void)updateGuideButtonView:(id)a0 state:(unsigned long long)a1 awemeModel:(id)a2 countDownSeconds:(long long)a3;
- (void)guideButtonView:(id)a0 updateUIForState:(unsigned long long)a1 awemeModel:(id)a2;
- (void)guideButtonView:(id)a0 updateContentForState:(unsigned long long)a1 awemeModel:(id)a2 countDownSeconds:(long long)a3;
- (id)normalAndHighlightStateContentStringForAwemeModel:(id)a0;
- (id)switchStateContentStringForAwemeModel:(id)a0;
- (void)goToInnerFeedWithSchema:(id)a0 enterType:(unsigned long long)a1 nextEpisode:(BOOL)a2;
- (id)schemaParamsStringForAwemeModel:(id)a0 enterType:(unsigned long long)a1;
- (id)innerFeedSchemaForAwemeModel:(id)a0;
- (void).cxx_destruct;
- (void)resetState;
- (void)addObserver;

@end

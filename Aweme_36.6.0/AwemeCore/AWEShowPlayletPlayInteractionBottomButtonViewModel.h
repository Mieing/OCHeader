@class AWEPlayInteractionContext, AWEPlayInteractionPlayletElementViewModel, AWECommonButtonInfoModel, UIView;
@protocol AWEShowShrinkTransitionWrapperProtocol;

@interface AWEShowPlayletPlayInteractionBottomButtonViewModel : NSObject <AWEPlayInteractionPlayletElementViewModelDelegate>

@property (retain, nonatomic) id<AWEShowShrinkTransitionWrapperProtocol> shrinkTransitionWrapper;
@property (retain, nonatomic) AWEPlayInteractionPlayletElementViewModel *countDownViewModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (retain, nonatomic) UIView *element;
@property (nonatomic) BOOL jumpToNextPlaylet;
@property (nonatomic) BOOL countDownEventSended;
@property (nonatomic) BOOL willGoToPlayletInnerFeed;
@property (nonatomic) BOOL willReloadForSkipInsertAD;
@property (nonatomic) BOOL canResetContent;
@property (copy, nonatomic) id /* block */ updateMainContent;
@property (copy, nonatomic) id /* block */ updateSubContent;
@property (copy, nonatomic) id /* block */ resetContent;
@property (copy, nonatomic) id /* block */ resetsubContent;
@property (nonatomic) BOOL appeared;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)trackADPageShow;
- (void)viewTransfer;
- (id)showTrackerRegisterParams;
- (BOOL)isInsertAD;
- (void)trackADPageExitWithDisappear;
- (void)trackADPageExitWithEndDisplayingBeforeReset;
- (id)initWithModel:(id)a0 context:(id)a1 element:(id)a2;
- (id)bottomBarTrackParams;
- (long long)rightBtnType;
- (BOOL)skipInsertADToPlayletInnerFeed;
- (void)transferToNextForInsertAD:(BOOL)a0 from:(long long)a1 otherParameters:(id)a2;
- (id)schemaParamsForClick:(id)a0 forceShowPanel:(BOOL)a1 otherParameters:(id)a2;
- (id)playletFeedInsertADParameters;
- (void)trackForCountDownShow;
- (void).cxx_destruct;
- (void)setup;

@end

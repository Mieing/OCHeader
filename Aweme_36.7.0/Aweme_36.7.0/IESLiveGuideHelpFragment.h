@class IESLiveButton, NSString, NSMapTable, IESLiveGuideAIAgentTipView, UIView, IESLiveGuideToolBarItem, AIAgentEntranceInfo;
@protocol IESLiveInternalRouter, IESLiveGuideToolBarProvider, IESLiveBubbleGuide;

@interface IESLiveGuideHelpFragment : IESLiveGuideComponent <IESLiveGuideActions>

@property (retain, nonatomic) IESLiveGuideToolBarItem *liveGuideItem;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<IESLiveGuideToolBarProvider> toolbarProvider;
@property (retain, nonatomic) IESLiveButton *customerServiceButton;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *customerServiceTipBubble;
@property (retain, nonatomic) NSString *customerServiceSchema;
@property (retain, nonatomic) NSMapTable *buttonsBkg;
@property (retain, nonatomic) AIAgentEntranceInfo *aiAgentInfo;
@property (retain, nonatomic) IESLiveGuideAIAgentTipView *aiAgentTipBubble;
@property (nonatomic) BOOL isAIAgentHighLighting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)onTipBubbleDisappear;
- (void)changeToNormalState;
- (void)setupCustomerService;
- (void)updateCustomerServiceButtonDisplay:(BOOL)a0;
- (void)setupCustomerServiceView;
- (void)setupCustomerServiceTipBubbleViewIfNeed;
- (void)setupAIAgent;
- (void)clearCustomerServiceTipBubble;
- (BOOL)shouldHideCustomerServiceView;
- (void)setupAIAgentViewIfNeed;
- (void)updateAIAgentImage:(BOOL)a0;
- (void)setupAIAgentTipBubbleIfNeed;
- (void)onAIAgentClicked;
- (void)trackAIAgentShow:(BOOL)a0;
- (id)getCurrentAIAgentSchema;
- (void)trackAIAgentClick:(BOOL)a0;
- (void)showThirdPartyGuidePage;
- (void)showScreenshotGuidePage;
- (void)helpButtonDidClick:(id)a0;
- (void).cxx_destruct;

@end

@class UIView, NSString, IESLiveGuideSceneSegmentedControl, AIAgentEntranceInfo, UIButton, IESLiveButton, NSMutableArray, NSMapTable, IESLiveAnchorAIAgentTipView;
@protocol IESLiveBubbleGuide, IESLiveGuideProvider;

@interface IESLiveGuideSceneFragment : IESLiveGuideComponent <IESLiveGuideActions, IESLiveGuideStartLiveEvent>

@property (retain, nonatomic) UIButton *videoButton;
@property (retain, nonatomic) UIButton *gameButton;
@property (retain, nonatomic) UIButton *screenShotButton;
@property (retain, nonatomic) UIButton *audioButton;
@property (retain, nonatomic) IESLiveGuideSceneSegmentedControl *segmentedControl;
@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (retain, nonatomic) id<IESLiveGuideProvider> guideProvider;
@property (retain, nonatomic) IESLiveButton *customerServiceButton;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *customerServiceTipBubble;
@property (retain, nonatomic) NSString *customerServiceSchema;
@property (retain, nonatomic) NSMapTable *buttonsBkg;
@property (retain, nonatomic) AIAgentEntranceInfo *aiAgentInfo;
@property (retain, nonatomic) IESLiveAnchorAIAgentTipView *aiAgentTipBubble;
@property (nonatomic) BOOL isAIAgentHighLighting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)onTipBubbleDisappear;
- (void)openLiveModelDidUpdate:(id)a0;
- (void)liveRequesting:(BOOL)a0;
- (void)changeToNormalState;
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
- (void)buildViewForNewStyle;
- (void)updateSegmentedControlDisplay:(BOOL)a0;
- (id)buildSceneItemsFromLiveModel;
- (id)buildSceneItemsFromLocal;
- (unsigned long long)liveTypeWithSchemaSceneString:(id)a0;
- (void)videoButtonClicked:(id)a0;
- (void)audioButtonClicked:(id)a0;
- (void)screenShotButtonClicked:(id)a0;
- (void)gameButtonClicked:(id)a0;
- (id)sceneItemsFromLiveTypes:(id)a0 titlesDic:(id)a1;
- (void)refreshButtonStatusWithSelectedButton:(id)a0;
- (id)guideSceneItemTitle:(id)a0 defaultTitle:(id)a1;
- (BOOL)shouldHideGuideSceneView;
- (unsigned long long)initialIndexWithSchemaSceneString:(id)a0;
- (void).cxx_destruct;

@end

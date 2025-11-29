@class NSMapTable, IESLiveGuideModel, IESLiveGuideAbilityPool, NSString, IESLiveGuideAbilityContainer;
@protocol IESLiveGuideToolBarData;

@interface IESLiveGuideAbilityAreaProvider : NSObject <IESLiveGuideAbilityAreaDelegate, IESLiveGuideToolBarProvider>

@property (retain, nonatomic) IESLiveGuideAbilityPool<IESLiveGuideToolBarData> *abilityPool;
@property (retain, nonatomic) IESLiveGuideAbilityContainer *realToolbar;
@property (retain, nonatomic) NSMapTable *bubbleViewTable;
@property (nonatomic) unsigned long long liveType;
@property (nonatomic) BOOL needHandlePlatformBubble;
@property (nonatomic) BOOL isLiveTypeChanged;
@property (nonatomic) BOOL isGuideLivePartnerWillShow;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)containItem:(id)a0;
- (id)viewOfItem:(id)a0;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (id)imageViewOfItemIdentifier:(id)a0;
- (id)labelOfItemIdentifier:(id)a0;
- (id)itemWith:(id)a0;
- (id)initialOperationItemIdentifier;
- (id)currentOperationItemIdentifier;
- (id)schemaOfItemIdentifier:(id)a0;
- (void)refreshItemBubbleWithIdentifier:(id)a0;
- (void)openMoreOperationPanel;
- (BOOL)operationItemIsMount;
- (void)showBubbleViewWithTitle:(id)a0 onIdentifier:(id)a1;
- (void)removeBubbleViewWithIdentifier:(id)a0;
- (id)replaceToolbarItemWithIdentifier:(id)a0 configItem:(id)a1;
- (id)shakeAnimation;
- (void)setupAbilityPool;
- (void)showMoreOperationHintBubble;
- (void)setupGuideModel:(id)a0;
- (void)updateToolBarDisplay:(BOOL)a0;
- (void)componentDidLoadAll;
- (void)addBubbleWithBubbles:(id)a0;
- (void)loadAllToolBarItems;
- (void)addBubbleGuideWithTitle:(id)a0 onIdentifier:(id)a1 key:(id)a2;
- (void)handlePlatformBubble;
- (BOOL)shouldHideToolBar;
- (void)guideToolbarDidFinishReload;
- (void)removeAllBubbleView;
- (void).cxx_destruct;
- (void)setupSubviews;

@end

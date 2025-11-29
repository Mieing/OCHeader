@class HTSLiveGiftItem, RACDisposable, IESLiveGiftPanelDataSharing, RACCommand, NSString, NSMutableArray, IESLiveGiveGiftTransaction;
@protocol IESLiveGiftPanelReaction, IESLiveFantasticGiftGroupSelectionListViewDataSource, IESLiveMotionGuideCoordinator, IESLiveGiftModuleRecipientRouter;

@interface IESLiveFantasticGiftGroupSelectionListItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveCollectionViewItemProtocol, IESLiveFantasticGiftGroupSelectionListViewDataSource>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) NSMutableArray *groupItems;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) IESLiveGiveGiftTransaction *transaction;
@property (retain, nonatomic) id<IESLiveMotionGuideCoordinator> guideCoordinator;
@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (nonatomic) BOOL kvSwitchEnable;
@property (nonatomic) unsigned long long currentSelectIndex;
@property (retain, nonatomic) HTSLiveGiftItem *currentSelectedGiftItem;
@property (readonly, nonatomic) id<IESLiveFantasticGiftGroupSelectionListViewDataSource> viewDataSource;
@property (nonatomic) BOOL removeMask;
@property (copy, nonatomic) id /* block */ didClickItem;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)updateGroupSelectionListEnable;

- (void)didSetAttachingDIContext;
- (void)gpe_changeTabWithIndex:(unsigned long long)a0 active:(BOOL)a1;
- (id)extraTrackParams;
- (unsigned long long)realToConsumeDiamond;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (BOOL)hasPlentyDiamand:(unsigned long long)a0;
- (void)updateCurrentGroupItems:(id)a0;
- (void)p_competeTransactionIfNeeded;
- (void)trackGroupWithEventName:(id)a0;
- (void)tapButton:(id)a0;
- (void)showLackOfBanlance:(long long)a0;
- (id)giftDisplayName;
- (BOOL)hasPricePlus;
- (void)pr_showCardGroupConsumeAlertWithName:(id)a0 groupCount:(long long)a1 actionBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3 interceptTracker:(id)a4;
- (void)sendGiftWithGroupCount:(long long)a0 interceptTracker:(id)a1;
- (void)markDownSendGiftTendency;
- (id)p_getCurrentGiftID;
- (void)sortGroupItemsInAscendingOrder;
- (id)buttonForItemAtIndex:(long long)a0;
- (void)didJumpOut;
- (long long)numberOfItems;
- (id)kvStore;
- (void).cxx_destruct;
- (void)dealloc;

@end

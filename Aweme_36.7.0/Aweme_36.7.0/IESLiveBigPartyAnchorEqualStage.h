@class IESLiveInteractionLayout, IESLiveRightBottomMutuallyExclusiveItem, NSString, IESLiveLayoutPlaceholderView, IESLiveBigPartyEqualGuestListViewModel, IESLiveBigPartyEqualGuestListView;
@protocol IESLiveRoomService, IESLiveCompoundSubscription, IESLiveBigPartyStageAdapter;

@interface IESLiveBigPartyAnchorEqualStage : NSObject <IESLiveBigPartyEqualGuestListViewDataSource, IESLiveBigPartyEqualGuestsListViewDelegate, IESLiveInteractEditSeatReaction, IESLiveInteractionLinkerServiceAction, IESLiveGuestBattleActions, IESLiveRoomThemeActions, IESLiveBigPartyAnchorStage>

@property (retain, nonatomic) IESLiveBigPartyEqualGuestListViewModel *guestListViewModel;
@property (retain, nonatomic) IESLiveBigPartyEqualGuestListView *guestListView;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLiveLayoutPlaceholderView *placeholderView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveBigPartyStageAdapter> adapter;

- (id)roomModel;
- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (id)emojiContainerForUserID:(id)a0 isInteractiveEmoji:(BOOL)a1;
- (void)willLoad;
- (BOOL)isLinking;
- (void)updateRoomThemeDataWithType:(long long)a0;
- (id)guestBattleUIAdaptor;
- (id)emojiContainerForUserID:(id)a0;
- (void)disposableIfNeeded;
- (void)interactionLinkerService:(id)a0 interactListDidChangeFrom:(id)a1 to:(id)a2;
- (void)willUnLoad;
- (id)guestsListView;
- (void)interactionDidUpdateAllSeats:(id)a0;
- (void)p_showGuestListView;
- (void)p_showRightBottomPlaceholderIfNeeded;
- (void)p_hideRightBottomPlaceholderIfNeeded;
- (id)addGuestListViewObserver;
- (void)p_addRightHolderViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)guestListView:(id)a0 didTapGuestInfoView:(id)a1;
- (id)rootPanelTopRightItemWithPosition:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })seatSessionLayoutRectWithIndex:(long long)a0;
- (void)p_removeBackgroundImage;
- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (BOOL)isAnchor;
- (void)dealloc;
- (void)addObservers;

@end

@class IESLiveRightBottomMutuallyExclusiveItem, IESLiveInteractionLayout, NSString, IESLiveLayoutPlaceholderView, IESLiveBigPartyEqualGuestListViewModel, IESLiveBigPartyEqualGuestListView;
@protocol IESLiveBigPartyStageAdapter, IESLiveCompoundSubscription, IESLiveBigPartyStageDelegate, IESLiveRoomService, IESLiveBigPartyStageDataSource;

@interface IESLiveBigPartyAudienceEqualStage : IESLiveBigPartyBaseStage <IESLiveBigPartyActions, IESLiveBigPartyEqualGuestListViewDataSource, IESLiveBigPartyEqualGuestsListViewDelegate, IESLiveInteractEditSeatReaction, IESLiveInteractionLinkerServiceAction, IESLiveBigPartyStage> {
    id<IESLiveBigPartyStageDataSource> _dataSource;
    id<IESLiveBigPartyStageDelegate> _delegate;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveBigPartyEqualGuestListViewModel *guestListViewModel;
@property (retain, nonatomic) IESLiveBigPartyEqualGuestListView *guestListView;
@property (nonatomic) BOOL isBigPartyGoingOn;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) IESLiveLayoutPlaceholderView *placeholderView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *bigPartyItem;
@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveBigPartyStageAdapter> adapter;

- (id)roomModel;
- (void)didSetAttachingDIContext;
- (id)emojiContainerForUserID:(id)a0 isInteractiveEmoji:(BOOL)a1;
- (void)willLoad;
- (BOOL)isLinking;
- (void)updateRoomThemeDataWithType:(long long)a0;
- (id)guestBattleUIAdaptor;
- (void)p_removePlaceholderView;
- (id)emojiContainerForUserID:(id)a0;
- (void)disposableIfNeeded;
- (void)interactionLinkerService:(id)a0 interactListDidChangeFrom:(id)a1 to:(id)a2;
- (void)willUnLoad;
- (id)guestsListView;
- (void)updateWithSubStyle:(id)a0;
- (void)updateRoomThemeData:(id)a0;
- (void)interactionDidUpdateAllSeats:(id)a0;
- (void)p_showGuestListView;
- (id)addGuestListViewObserver;
- (void)p_addRightHolderViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isAnchorWithUser:(id)a0;
- (void)guestListView:(id)a0 didTapGuestInfoView:(id)a1;
- (void)guestListView:(id)a0 didTapAcceptLink:(id)a1;
- (void)pr_layoutPlayer;
- (void)p_showPlaceholderView;
- (void)handleInteractAllListChange:(id)a0;
- (id)equalGuestsListView;
- (void)updateRoomThemeWithBGData:(id)a0;
- (BOOL)isVideoChatDynamicLayout1V6Horizontal;
- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithLayout:(id)a0;
- (BOOL)isAnchor;
- (void)setDataSource:(id)a0;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)addObservers;

@end

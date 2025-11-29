@class IESLiveGiftVoteIndicatorView, HTSLiveToolbarItem, NSString, IESLiveGiftVoteStore;
@protocol IESLiveGiftVoteActions;

@interface IESLiveGiftVoteFragment : IESLiveRoomComponent <IESLiveGiftVoteReaction, IESLiveGiftVoteRouter>

@property (retain, nonatomic) IESLiveGiftVoteStore *store;
@property (nonatomic) BOOL isCoolDowning;
@property (retain, nonatomic) IESLiveGiftVoteIndicatorView *voteFloatView;
@property (retain, nonatomic) HTSLiveToolbarItem *item;
@property (retain, nonatomic) id<IESLiveGiftVoteActions> actionCreator;
@property (nonatomic) BOOL shouldForbidInteract;
@property (retain, nonatomic) NSString *fobidInteractToast;
@property (retain, nonatomic) HTSLiveToolbarItem *giftVoteItem;
@property (nonatomic) BOOL blockOpenOnGiftClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (BOOL)p_enabled;
- (void)prepareStartGiftVote;
- (void)p_setInteraciveDisabled:(id)a0;
- (void)p_setInteraciveEnabled;
- (BOOL)ktvVoteEnable;
- (BOOL)giftVoteEnable;
- (BOOL)isVoteProcessing;
- (id)getCurrentVoteGiftIds;
- (unsigned long long)currentVoteType;
- (void)subscribeGiftVoteListData;
- (void)loadGiftVoteItem;
- (void)p_clickAnchorCreateGiftVoteItem;
- (void)tr_clickCreateItemEvent;
- (void)p_setItemDisabled:(BOOL)a0;
- (void)p_clickGiftVoteItem;
- (void)tr_clickVoteItemEvent;
- (void)p_voteEndCooldown;
- (void)tr_showVoteEvent;
- (void)p_loadAudienceVoteFloatViewWithVote:(id)a0 completion:(id /* block */)a1;
- (void)receivedGiftVoteStart:(id)a0;
- (void)receivedGiftVoteFinished:(id)a0;
- (void)checkGiftVoteList;
- (void).cxx_destruct;
- (void)dealloc;

@end

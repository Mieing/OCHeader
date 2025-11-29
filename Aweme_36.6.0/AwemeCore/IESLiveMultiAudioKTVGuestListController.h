@class UIView, NSString, NSArray, NSMutableDictionary, UIButton, NSDictionary, IESLiveMultiAudioKTVGuestScrollBar, IESLiveChatRoomInviteGuideHelper, IESLiveMultiAudioKTVSingleSeatView;
@protocol IESLiveInteractUserModel, IESLiveRoomService, HTSLivePluginLayoutMachineProvider, IESLiveUserService, IESLiveInteractionEmojiRouter, IESLiveMultiKTVRouter, IESLiveInteractiveInviteService, IESLiveMultiAudioAnchorSeatViewProtocol;

@interface IESLiveMultiAudioKTVGuestListController : NSObject <UIScrollViewDelegate, IESLiveChatRoomInviteGuideHelperDeleagte> {
    NSMutableDictionary *_uidToUserModel;
}

@property (nonatomic) double containerHeight;
@property (retain, nonatomic) NSArray *hostSeats;
@property (retain, nonatomic) NSArray *guestSeats;
@property (retain, nonatomic) UIView *hostSeatsContainer;
@property (retain, nonatomic) IESLiveMultiAudioKTVGuestScrollBar *guestScrollBar;
@property (retain, nonatomic) UIView *devideLine;
@property (retain, nonatomic) UIButton *orderButton;
@property (retain, nonatomic) NSMutableDictionary *linkmicIDToUid;
@property (nonatomic) BOOL enableSEIUpdateViewOptimize;
@property (retain, nonatomic) IESLiveChatRoomInviteGuideHelper *inviteGuideHelper;
@property (retain, nonatomic) IESLiveMultiAudioKTVSingleSeatView *showingView;
@property (retain, nonatomic) id<IESLiveInteractiveInviteService> inviteFriendsService;
@property (weak, nonatomic) id<HTSLivePluginLayoutMachineProvider> layoutMachineProvider;
@property (weak, nonatomic) id<IESLiveMultiKTVRouter> multiKTVRouter;
@property (weak, nonatomic) id<IESLiveInteractionEmojiRouter> emojiRouter;
@property (weak, nonatomic) id<IESLiveUserService> userService;
@property (weak, nonatomic) id<IESLiveRoomService> roomService;
@property (nonatomic) BOOL isCPUOptimize;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) id<IESLiveInteractUserModel> host;
@property (copy, nonatomic) id /* block */ guestSeatClickCompletion;
@property (copy, nonatomic) id /* block */ didClickUser;
@property (weak, nonatomic) UIView *anchorSeatPointView;
@property (copy, nonatomic) NSDictionary *uidToInfoView;
@property (weak, nonatomic) UIView<IESLiveMultiAudioAnchorSeatViewProtocol> *anchorSeatView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfSlotView;
- (void)p_openOrderSongPanel;
- (void)inviteGuideViewWillShowing;
- (void)inviteGuideViewWillHiding;
- (void)triggerInvitationGuideAnimation;
- (void)setupGuideHelper;
- (void)didClickInviteWithUser:(id)a0 andInRoom:(BOOL)a1;
- (id)findTheEmptyView;
- (void)removeAllUserView;
- (void)updateWithAppData:(id)a0;
- (BOOL)hasEmptySeat;
- (void)updateUserInfo:(id)a0 enableSendGiftToHost:(BOOL)a1;
- (BOOL)isInvitationGuideAnimShowingWithPosition:(long long)a0;
- (double)getProperSpacerBetweenGuestSeats;
- (void)didTapSingleSeatView:(id)a0;
- (double)seatsHorizontalSpace;
- (id)findTargetEmptyViewWithActualIndex:(long long)a0 skipIndex:(long long)a1;
- (void)showGuestListView;
- (void)relayoutGuestSeatsWithHostSeatsCount:(unsigned long long)a0 activeListCount:(long long)a1;
- (void)relayoutGuestSeatsWithAllMembersList:(id)a0;
- (void)configInfoView:(id)a0;
- (id)relayoutHostSeatsWithHostList:(id)a0;
- (id)initWithDIContext:(id)a0 containerHeight:(double)a1;
- (void)updateWithAllMembersList:(id)a0;
- (void)updateGuestLitSingStatus;
- (double)multiAudioKTVGuestSeatsTop;
- (void).cxx_destruct;
- (BOOL)isAdminUser;
- (BOOL)isAnchor;
- (void)scrollViewDidScroll:(id)a0;
- (void)updateUserInfo:(id)a0;

@end

@protocol IESLiveInteractiveInviteService;

@interface IESLiveGiftMessageBoardLinkmicMethodImpl : IESLiveGiftMessageBoardLinkmicMethod

@property (retain, nonatomic) id<IESLiveInteractiveInviteService> inviteFriendsService;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isInTeamFight;
- (void)popAlertWithTitle:(id)a0 comfirmBloc:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isAnchor;

@end

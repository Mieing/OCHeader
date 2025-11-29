@class UIButton, HTSLiveInteractiveAPIV2, NSNumber;
@protocol IESLiveRoomService;

@interface IESLiveIntercomCommentInvitePanel : HTSLivePopUpView

@property (nonatomic) BOOL isNotRemind;
@property (retain, nonatomic) UIButton *notRemindButton;
@property (retain, nonatomic) UIButton *inviteButton;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *interactiveAPI;
@property (retain, nonatomic) NSNumber *channelID;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) id /* block */ inviteSuccessBlock;

- (void)trackWithEvent:(id)a0 extra:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roomModel:(id)a1 channelID:(id)a2 DIContext:(id)a3;
- (BOOL)needShowInstruction:(id)a0;
- (void)onClickHelpIconButton;
- (void)didTapInviteButton;
- (void)didTapNotRemindButton;
- (void).cxx_destruct;
- (void)setupUI;

@end

@class IESLiveCountTimer, HTSLiveInteractiveAPIV2, NSNumber, UIButton;
@protocol IESLiveRoomService;

@interface IESLiveIntercomCommentMediaReceivePanel : HTSLivePopUpView

@property (nonatomic) BOOL isNotReceive;
@property (retain, nonatomic) UIButton *notReceiveButton;
@property (retain, nonatomic) NSNumber *channelID;
@property (retain, nonatomic) IESLiveCountTimer *countTimer;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) UIButton *rejectButton;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *interactionAPI;
@property (copy, nonatomic) id /* block */ replySuccessBlock;

- (void)trackWithEvent:(id)a0 extra:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roomModel:(id)a1 channelID:(id)a2 DIContext:(id)a3;
- (BOOL)needShowInstruction:(id)a0;
- (void)onClickHelpIconButton;
- (void)setupCountTimer;
- (void)replyIntercomCommentWithReplyType:(unsigned long long)a0;
- (void)didTapRejectButton;
- (void)didTapReceiveButton;
- (void)didTapNotReceiveButton;
- (void).cxx_destruct;
- (void)cancelTimer;
- (void)hide;
- (void)setupUI;

@end

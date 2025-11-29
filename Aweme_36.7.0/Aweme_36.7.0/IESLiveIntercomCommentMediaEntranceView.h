@class NSString, RACCompoundDisposable, IESLiveCountTimer, UIButton, IESLiveIntercomCommentMediaConfig, IESLiveIntercomCommentMediaInvitePanel, HTSLiveInteractiveAPIV2, NSNumber;
@protocol IESLiveRoomService;

@interface IESLiveIntercomCommentMediaEntranceView : UIView <HTSLiveMessageSubscriber>

@property (retain, nonatomic) UIButton *intercomCommentButton;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *interactiveAPI;
@property (retain, nonatomic) NSNumber *channelID;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (nonatomic) unsigned long long role;
@property (nonatomic) BOOL isWaitReply;
@property (weak, nonatomic) IESLiveIntercomCommentMediaInvitePanel *invitePanel;
@property (nonatomic) long long closeCount;
@property (retain, nonatomic) IESLiveCountTimer *waitTimer;
@property (retain, nonatomic) IESLiveIntercomCommentMediaConfig *intercomConfig;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)trackWithEvent:(id)a0 extra:(id)a1;
- (void)registMessage;
- (double)intercomStartTime;
- (void)cancelWaitTimer;
- (unsigned long long)intercomCommentStatus;
- (void)showIntercomCommentButtonRedDot:(BOOL)a0;
- (void)setShowAudienceIntercomComment:(BOOL)a0;
- (void)onClickIntercomButton;
- (void)updateIntercomCommentStatus:(unsigned long long)a0;
- (void)updateIntercomCommentStartTime:(double)a0;
- (void)receiveInviteMessage:(id)a0;
- (void)receiveReplyMessage:(id)a0;
- (void)inviteIntercomComment;
- (void)showCloseDialog;
- (void)realInviteIntercomComment;
- (void)showInvitePanel;
- (void)setupWaitTimer;
- (void)closeIntercomComment;
- (id)initWithRoomModel:(id)a0 channelID:(id)a1 DIContext:(id)a2 isAnchor:(BOOL)a3 scene:(unsigned long long)a4;
- (void)updateWithData:(id)a0 enableShow:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;
- (void)messageReceived:(id)a0;

@end

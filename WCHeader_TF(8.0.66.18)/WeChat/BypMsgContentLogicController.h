@class CBaseContact;

@interface BypMsgContentLogicController : BaseMsgContentLogicController

@property (retain, nonatomic) CBaseContact *realChatContact;
@property (retain, nonatomic) CBaseContact *myRoleContact;

- (void)layoutVisibleCellsForUpdateContact:(id)a0;
- (void)configWithSessionId:(id)a0;
- (void)OpenDetailInfo;
- (void)OpenContactInfo:(id)a0;
- (id)GetUsrTitle;
- (id)getLeftBarButton;
- (id)getMessageChatContactByMessageWrap:(id)a0;
- (void)ResendMsg:(id)a0 MsgWrap:(id)a1;
- (id)FormImageMsg:(id)a0 withImage:(id)a1 withData:(id)a2;
- (void)AddMsg:(id)a0 MsgWrap:(id)a1;
- (void)AddVideoMsg:(id)a0 ToUsr:(id)a1 VideoInfo:(id)a2;
- (void)AddEmoticonMsg:(id)a0 MsgWrap:(id)a1;
- (void)AdjustMsgBeforeSendWithChatName:(id)a0 MsgWrap:(id)a1;
- (void)AdjustMsgFromToUserWithChatName:(id)a0 MsgWrap:(id)a1;
- (id)GetMsg:(id)a0 FromID:(unsigned int)a1 Limit:(int)a2 LeftCount:(unsigned int *)a3;
- (void)DelMsg:(id)a0 MsgList:(id)a1 DelAll:(BOOL)a2;
- (unsigned int)GetUnReadCount:(id)a0;
- (void)ClearUnRead:(id)a0 FromID:(unsigned int)a1 ToID:(unsigned int)a2;
- (BOOL)isMsgCanRevoke:(id)a0;
- (BOOL)CanSendEmoticonMessage;
- (unsigned int)getInputLimitEmotionBufSize;
- (BOOL)CanSendImageMsg:(id)a0;
- (BOOL)CanSendVideoMsg;
- (BOOL)CanSendOriginalVideo;
- (long long)getLivePhotoMode;
- (id)getMsgSendOpEntry;
- (void)CameraControllerDidTakeVideo:(id)a0;
- (void).cxx_destruct;

@end

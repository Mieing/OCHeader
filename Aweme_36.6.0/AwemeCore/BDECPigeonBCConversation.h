@interface BDECPigeonBCConversation : BDECPigeonBaseSingleConversation

- (id)openTime;
- (id)bizConversationID;
- (id)pigeonShopID;
- (id)pigeonBizType;
- (id)originExt;
- (id)countdownTime;
- (id)curTalkID;
- (id)curSubConvBizStatus;
- (long long)curSubConvCreateTime;
- (id)customerUID;
- (BOOL)visitAgain;
- (BOOL)isNewEnter;
- (BOOL)messageReadWithIndex:(long long)a0;
- (void)asyncResendMessage:(id)a0;
- (void)asyncResendMessage:(id)a0 additionalTrackInfo:(id)a1;
- (id)versionTime;
- (long long)messageReadUserID;
- (void)createSubConversationAndResendMessage:(id)a0 completion:(id /* block */)a1;
- (void)createSubConversationAndSendMessage:(id)a0 completion:(id /* block */)a1;
- (void)createSubConversationAndResendMessage:(id)a0 additionalTrackInfo:(id)a1 completion:(id /* block */)a2;
- (void)createSubConversationWhenNotExist:(id /* block */)a0;
- (void)createSubConversationAndSendMessage:(id)a0 additionalTrackInfo:(id)a1 completion:(id /* block */)a2;
- (void)innerAsyncSendMessageWithTrack:(id)a0 completion:(id /* block */)a1;
- (void)innerAsyncSendMessage:(id)a0 completion:(id /* block */)a1;
- (BOOL)isMessageReadFromLocalWithIndex:(long long)a0;
- (BOOL)closed;
- (BOOL)countdown;

@end

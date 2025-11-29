@class NSString, ShareConfirmView;

@interface CreateChatRoomHandler : BaseOpenSDKHandler <MMWebViewDelegate, PBMessageObserverDelegate, ShareConfirmViewDelegate> {
    NSString *_groupId;
    NSString *_openId;
    NSString *_chatRoomName;
    NSString *_chatRoomNickName;
    NSString *_extMsg;
    ShareConfirmView *_confirmView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)realHandleReqAfterermissionValidation;
- (void)sendRespAndReturnTo3rdApp:(id)a0 errCode:(int)a1;
- (void)openCreateChatRoomH5:(id)a0;
- (void)showSucessView;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)backTo3rdApp:(int)a0;
- (void)onLeaveWebviewAndJumpToViewConroller;
- (void)OnBackToApp:(id)a0;
- (void)OnStayAtWeChat:(id)a0;
- (void).cxx_destruct;

@end

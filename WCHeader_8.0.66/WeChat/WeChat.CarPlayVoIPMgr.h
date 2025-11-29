@interface WeChat.CarPlayVoIPMgr : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ currentController;
    void /* unknown type, empty encoding */ rootVoIPTalkingController;
}

- (void)setRoomInfoWithRoomID:(long long)a0 roomKey:(long long)a1;
- (void)onEndCallWithIsiLink:(BOOL)a0 forExtraInvite:(BOOL)a1;
- (id)openCallerControllerWithContact:(id)a0 toast:(id)a1 isMuted:(BOOL)a2 isVideo:(BOOL)a3;
- (id)openReceiveControllerWithContact:(id)a0 toast:(id)a1 isVideo:(BOOL)a2;
- (id)openTalkingControllerWithContact:(id)a0 toast:(id)a1 isMuted:(BOOL)a2 isVideo:(BOOL)a3 isCaller:(BOOL)a4;
- (id)openExtraRecieveControllerWithContact:(id)a0 toast:(id)a1 isVideo:(BOOL)a2;
- (BOOL)isOnTalking;
- (BOOL)isOnVoIP;
- (id)getTalkingController;
- (void)setTalkingControllerDelegateWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end

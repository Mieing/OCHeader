@interface WeChat.DoNotDisturbManger : NSObject <IMsgExt> {
    void /* unknown type, empty encoding */ _hasEducated;
}

+ (id)voipTipTextWithIcon:(id)a0;

- (void)OnMsgSendSuccess:(id)a0;
- (void)OnModMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (id)init;
- (void)showEducatePageIfNeed;
- (void).cxx_destruct;

@end

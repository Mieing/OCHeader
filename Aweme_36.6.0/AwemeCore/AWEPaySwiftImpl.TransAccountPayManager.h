@interface AWEPaySwiftImpl.TransAccountPayManager : NSObject <CJPayAPIDelegate> {
    void /* unknown type, empty encoding */ checkPayStatusRetryTimesMap;
    void /* unknown type, empty encoding */ AWEPayTACreateUID;
    void /* unknown type, empty encoding */ AWEPayTACreateConID;
    void /* unknown type, empty encoding */ AWEPayTACreateConLongID;
    void /* unknown type, empty encoding */ AWEPayTACreateAmount;
    void /* unknown type, empty encoding */ AWEPayTACreateTitle;
    void /* unknown type, empty encoding */ AWEPayTACreateClientID;
    void /* unknown type, empty encoding */ AWEPayTACreateOrderNo;
    void /* unknown type, empty encoding */ AWEPayTACreateVerifyInfo;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ recvUid;
    void /* unknown type, empty encoding */ orderId;
    void /* unknown type, empty encoding */ clientMsgId;
    void /* unknown type, empty encoding */ conversationID;
    void /* unknown type, empty encoding */ conversationLongID;
}

- (void)callState:(BOOL)a0 fromScene:(long long)a1;
- (void)onResponse:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

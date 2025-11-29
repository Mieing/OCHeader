@class NSString;

@interface AWEFormatSayHiService : AWEIMComponentBase <AWEConversationFormatEnterActions, AWEIMMessageListDataAction, AWEFormatImpl.AWEFormatSayHiProtocol> {
    void /* unknown type, empty encoding */ formatId;
    void /* unknown type, empty encoding */ didSendSayHi;
    void /* unknown type, empty encoding */ sayHiMsgReqId;
    void /* unknown type, empty encoding */ roomId;
    void /* unknown type, empty encoding */ room;
    void /* unknown type, empty encoding */ routerParser;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchContainerContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sayHiAnswerFromLocal;
}

@property (nonatomic, readonly) NSString *localSerachKeyword;

- (BOOL)canSendWelcome;
- (id)getSayHiMsgReqId;
- (void)didReceiveNewMessageWithMessageProtocol:(id)a0 reason:(long long)a1;
- (void)didReceiveSendMessageProtocolResponse:(id)a0 message:(id)a1 result:(BOOL)a2;
- (void)didUpdateFormatRoom:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

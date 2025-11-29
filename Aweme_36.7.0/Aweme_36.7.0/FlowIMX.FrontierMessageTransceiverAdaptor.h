@interface FlowIMX.FrontierMessageTransceiverAdaptor : NSObject <IESLCMessageHandlerService> {
    void /* unknown type, empty encoding */ delegate;
}

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

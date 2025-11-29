@interface WeAppCore.CDPEventSender : NSObject {
    void /* unknown type, empty encoding */ eventQueue;
    void /* unknown type, empty encoding */ serialQueue;
    void /* unknown type, empty encoding */ currentEventID;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ webView;

- (void)enqueueEventWithCommand:(id)a0;
- (void)handleDomEventWithParam:(id)a0 webViewID:(unsigned int)a1;
- (id)init;
- (void).cxx_destruct;

@end

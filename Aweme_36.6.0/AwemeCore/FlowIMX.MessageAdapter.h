@class NSString;

@interface FlowIMX.MessageAdapter : FlowIMX.AsyncOperation {
    void /* unknown type, empty encoding */ messageID;
    void /* unknown type, empty encoding */ conversationID;
    void /* unknown type, empty encoding */ preMessage;
    void /* unknown type, empty encoding */ _needInterruptMsg;
    void /* unknown type, empty encoding */ callback;
    void /* unknown type, empty encoding */ _lastCallbackMsg;
    void /* unknown type, empty encoding */ producerState;
    void /* unknown type, empty encoding */ isCompleted;
    void /* unknown type, empty encoding */ isTypewriterInit;
    void /* unknown type, empty encoding */ $__lazy_storage_$_typewriter;
    void /* unknown type, empty encoding */ eventCtx;
    void /* unknown type, empty encoding */ _delayTimer;
    void /* unknown type, empty encoding */ _delayTimerSetupInBackground;
}

@property (nonatomic, readonly) NSString *description;

- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;

@end

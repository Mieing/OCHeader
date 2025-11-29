@interface AWEPaySwiftImpl.FKMNFCCodeStatusManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ curLoopReqModel;
    void /* unknown type, empty encoding */ codeStatusCallback;
    void /* unknown type, empty encoding */ codeStatusCheckTimer;
    void /* unknown type, empty encoding */ payTimeoutTimer;
    void /* unknown type, empty encoding */ isCodeStatusChecking;
    void /* unknown type, empty encoding */ bindCodeRetryCount;
    void /* unknown type, empty encoding */ payTimeoutInterval;
    void /* unknown type, empty encoding */ isFinal;
}

- (void)didReceiveMessageWithNoti:(id)a0;

@end

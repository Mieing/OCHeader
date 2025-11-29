@interface MMOpenVoiceNetworkMgr : NSObject <CNetworkStatusExt> {
    id /* block */ networkCallStatusCallback;
}

- (void)startListen:(id /* block */)a0;
- (void)stopListen;
- (int)getCurrentNetType;
- (unsigned int)getNetworkType;
- (void)ReachabilityChange:(unsigned int)a0;
- (void).cxx_destruct;

@end

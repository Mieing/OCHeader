@interface WeChat.FinderLiveStayTimeReporter : NSObject <MMFinderLiveStayBusinessExt> {
    void /* unknown type, empty encoding */ stayBusinessFlag;
    void /* unknown type, empty encoding */ redDotTipsID;
    void /* unknown type, empty encoding */ commentScene;
    void /* unknown type, empty encoding */ enterTimeStampMs;
    void /* unknown type, empty encoding */ exitTimeStampMs;
}

- (id)init;
- (void)dealloc;
- (void)OnLiveStayBusinessExit:(unsigned long long)a0;
- (void)OnLiveStayBusinessEnter:(unsigned long long)a0 commentScene:(id)a1 reddotTipsID:(id)a2;
- (void).cxx_destruct;

@end

@interface WeChat.WCPayFinderSessionReportData : NSObject {
    void /* unknown type, empty encoding */ chatType;
    void /* unknown type, empty encoding */ sendType;
}

- (id)initWithTalkerName:(id)a0 fromUsername:(id)a1;
- (id)initWithShareScene:(unsigned long long)a0 talkerName:(id)a1 fromUsername:(id)a2;
- (id)initWithEnterScene:(int)a0 talkerName:(id)a1 fromUsername:(id)a2;
- (id)init;

@end

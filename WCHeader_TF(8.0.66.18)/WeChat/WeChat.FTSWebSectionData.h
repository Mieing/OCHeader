@class NSString;

@interface WeChat.FTSWebSectionData : WeChat.FTSSectionData {
    void /* unknown type, empty encoding */ searchID;
    void /* unknown type, empty encoding */ requestID;
    void /* unknown type, empty encoding */ sessionID;
}

@property (nonatomic, copy) NSString *searchID;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic, copy) NSString *sessionID;
@property (nonatomic) void /* unknown type, empty encoding */ position;
@property (nonatomic) void /* unknown type, empty encoding */ enabledSugCountLimitedByServer;
@property (nonatomic) void /* unknown type, empty encoding */ expiredForPrePositionSug;
@property (nonatomic) void /* unknown type, empty encoding */ isTopAndNoTitle;
@property (nonatomic, readonly) NSString *description;

- (id)initWithType:(unsigned long long)a0 data:(id)a1 searchItemCount:(long long)a2;
- (void).cxx_destruct;

@end

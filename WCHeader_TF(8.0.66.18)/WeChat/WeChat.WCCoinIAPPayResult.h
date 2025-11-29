@class NSString;

@interface WeChat.WCCoinIAPPayResult : NSObject {
    void /* unknown type, empty encoding */ failMsg;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ status;
@property (nonatomic, readonly) NSString *failMsg;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ midasOriginalError;

- (id)initWithStatus:(long long)a0 failMsg:(id)a1 midasOriginalError:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end

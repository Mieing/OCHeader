@class NSString;

@interface WeChat.MMLogIDInfo : NSObject {
    void /* unknown type, empty encoding */ value;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ logID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) NSString *value;

- (id)init;
- (id)initWithLogID:(long long)a0 value:(id)a1 type:(long long)a2;
- (void).cxx_destruct;

@end

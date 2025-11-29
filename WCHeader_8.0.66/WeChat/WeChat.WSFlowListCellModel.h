@class NSString;

@interface WeChat.WSFlowListCellModel : NSObject {
    void /* unknown type, empty encoding */ extInfo;
    void /* unknown type, empty encoding */ topText;
    void /* unknown type, empty encoding */ tailText;
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic) void /* unknown type, empty encoding */ type;
@property (nonatomic, retain) void /* unknown type, empty encoding */ liteAppInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ finderFeedInfo;
@property (nonatomic, copy) NSString *extInfo;
@property (nonatomic, copy) NSString *topText;
@property (nonatomic, copy) NSString *tailText;
@property (nonatomic, copy) NSString *identifier;

- (id)init;
- (void).cxx_destruct;

@end

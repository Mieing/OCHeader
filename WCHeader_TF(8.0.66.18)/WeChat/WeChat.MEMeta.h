@class NSString;

@interface WeChat.MEMeta : WeChat.MEBaseMeta {
    void /* unknown type, empty encoding */ ext;
    void /* unknown type, empty encoding */ emojiKey;
    void /* unknown type, empty encoding */ fromUserName;
    void /* unknown type, empty encoding */ toUserName;
    void /* unknown type, empty encoding */ content;
}

@property (nonatomic, copy) NSString *ext;
@property (nonatomic, copy) NSString *emojiKey;
@property (nonatomic) void /* unknown type, empty encoding */ isFrom;
@property (nonatomic) void /* unknown type, empty encoding */ msgId;
@property (nonatomic) void /* unknown type, empty encoding */ msgType;
@property (nonatomic, copy) NSString *fromUserName;
@property (nonatomic, copy) NSString *toUserName;
@property (nonatomic) void /* unknown type, empty encoding */ emojiConfigVersion;
@property (nonatomic, copy) NSString *content;

- (id)toDictionary;
- (id)init;
- (void).cxx_destruct;

@end

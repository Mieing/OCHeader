@class NSString;

@interface WeChat.FTSSectionData : NSObject {
    void /* unknown type, empty encoding */ data;
}

@property (nonatomic) void /* unknown type, empty encoding */ type;
@property (nonatomic, copy) id data;
@property (nonatomic) void /* unknown type, empty encoding */ searchItemCount;
@property (nonatomic) void /* unknown type, empty encoding */ disableCountLimit;
@property (nonatomic) void /* unknown type, empty encoding */ isLargeInputBox;
@property (nonatomic) void /* unknown type, empty encoding */ isReplaceText;
@property (nonatomic) void /* unknown type, empty encoding */ isFromVoice;
@property (nonatomic, readonly) NSString *description;

- (id)initWithType:(unsigned long long)a0 data:(id)a1 searchItemCount:(long long)a2;
- (id)init;
- (void).cxx_destruct;

@end

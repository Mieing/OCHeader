@class NSString;

@interface WeAppCore.WASiderbarItemData : NSObject {
    void /* unknown type, empty encoding */ username;
    void /* unknown type, empty encoding */ appId;
    void /* unknown type, empty encoding */ appNickName;
    void /* unknown type, empty encoding */ appIconUrl;
    void /* unknown type, empty encoding */ referText;
    void /* unknown type, empty encoding */ extraData;
}

@property (nonatomic, copy) NSString *username;
@property (nonatomic) void /* unknown type, empty encoding */ debugMode;
@property (nonatomic) void /* unknown type, empty encoding */ updateTime;

- (id)init;
- (void).cxx_destruct;

@end

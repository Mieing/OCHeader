@class NSString;

@interface WeAppCore.WAGroupOpenIdInfo : NSObject {
    void /* unknown type, empty encoding */ groupOpenid;
    void /* unknown type, empty encoding */ username;
}

@property (nonatomic, copy) NSString *groupOpenid;
@property (nonatomic, copy) NSString *username;

- (id)init;
- (void).cxx_destruct;

@end

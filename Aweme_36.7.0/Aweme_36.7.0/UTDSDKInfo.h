@class NSString, NSDictionary;

@interface UTDSDKInfo : NSObject {
    NSDictionary *_meta;
}

@property (retain, nonatomic) NSString *appKey;
@property (retain, nonatomic) NSString *appSecret;
@property (retain, nonatomic) NSString *debugID;
@property (nonatomic) BOOL daily;
@property (nonatomic) BOOL securitySign;
@property (readonly, nonatomic) NSDictionary *meta;
@property (retain, nonatomic) NSString *authcode;

- (void)setAppKey:(id)a0 setAppSecret:(id)a1;
- (id)globalReserves;
- (void).cxx_destruct;
- (id)_SDKVersion;

@end

@interface FlowKit.FlowAwemeOpenAuthInfoModel : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ accessToken;
    void /* unknown type, empty encoding */ refreshToken;
    void /* unknown type, empty encoding */ scopes;
    void /* unknown type, empty encoding */ openId;
    void /* unknown type, empty encoding */ lastModified;
    void /* unknown type, empty encoding */ expiresIn;
    void /* unknown type, empty encoding */ refreshTokenExpiresIn;
    void /* unknown type, empty encoding */ expiresTimestamp;
    void /* unknown type, empty encoding */ refreshTokenExpiresTimestamp;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end

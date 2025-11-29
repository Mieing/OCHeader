@class NSString, NSDate;

@interface GACAppCheckStoredToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDate *receivedAtDate;
@property (readonly, nonatomic) long long storageVersion;

- (id)appCheckToken;
- (void)updateWithToken:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

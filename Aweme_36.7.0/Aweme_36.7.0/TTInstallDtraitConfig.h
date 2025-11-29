@class NSNumber, NSString, NSData;

@interface TTInstallDtraitConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *dtraitVersion;
@property (nonatomic) BOOL needBindDtrait;
@property (copy, nonatomic) NSString *dtraitPublicKey1Version;
@property (copy, nonatomic) NSString *dtraitPublicKey2Version;
@property (retain, nonatomic) NSData *dtraitPublicKey1;
@property (retain, nonatomic) NSData *dtraitPublicKey2;
@property (copy, nonatomic) NSString *dtraitToken;

+ (id)publicKeyWithBase64String:(id)a0;
+ (id)configWithJsonObj:(id)a0;

- (BOOL)isEmptyConfig;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end

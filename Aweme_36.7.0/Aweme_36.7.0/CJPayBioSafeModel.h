@class NSString;

@interface CJPayBioSafeModel : NSObject

@property (copy, nonatomic) NSString *magicStr;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *serialNum;
@property (copy, nonatomic) NSString *seedHexString;
@property (copy, nonatomic) NSString *vendor;
@property (nonatomic) long long tokenLength;
@property (copy, nonatomic) NSString *expireTime;
@property (nonatomic) long long timeStep;
@property (nonatomic) long long pwdType;

- (id)initWithTokenFile:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end

@class NSString, NSDictionary, NSURL, NSArray, NSDate;

@interface OIDIDToken : NSObject

@property (readonly, nonatomic) NSDictionary *header;
@property (readonly, nonatomic) NSDictionary *claims;
@property (readonly, nonatomic) NSURL *issuer;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSArray *audience;
@property (readonly, nonatomic) NSDate *expiresAt;
@property (readonly, nonatomic) NSDate *issuedAt;
@property (readonly, nonatomic) NSString *nonce;

+ (id)fieldMap;
+ (id)parseJWTSection:(id)a0;
+ (id)base64urlNoPaddingDecode:(id)a0;

- (id)initWithIDTokenString:(id)a0;
- (void).cxx_destruct;

@end

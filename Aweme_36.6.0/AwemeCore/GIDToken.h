@class NSString, NSDate;

@interface GIDToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *tokenString;
@property (readonly, nonatomic) NSDate *expirationDate;

- (id)initWithTokenString:(id)a0 expirationDate:(id)a1;
- (BOOL)isTheSameDate:(id)a0 with:(id)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToToken:(id)a0;

@end

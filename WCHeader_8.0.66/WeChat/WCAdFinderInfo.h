@class NSString;

@interface WCAdFinderInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *exportId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *finderUsername;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end

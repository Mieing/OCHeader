@class NSString;

@interface CSJDeepLink : NSObject <NSCoding>

@property (copy, nonatomic) NSString *deepLinkURL;
@property (copy, nonatomic) NSString *fallbackURL;
@property (nonatomic) long long fallbackType;

- (void)setupDataWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

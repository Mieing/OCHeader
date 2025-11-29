@class NSString;

@interface AWEAccountPhoneNumber : NSObject <NSCopying>

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *number;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)stringValue;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

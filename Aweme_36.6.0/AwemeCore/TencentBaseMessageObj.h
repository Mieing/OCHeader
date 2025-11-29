@class NSString, NSDictionary;

@interface TencentBaseMessageObj : NSObject <NSSecureCoding>

@property (nonatomic) long long nVersion;
@property (copy, nonatomic) NSString *sName;
@property (copy, nonatomic) NSDictionary *dictExpandInfo;

+ (BOOL)supportsSecureCoding;

- (BOOL)isVaild;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithVersion:(unsigned long long)a0;

@end

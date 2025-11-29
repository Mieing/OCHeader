@class NSString;

@interface AmoebaNewUBACacheModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long cacheTime;
@property (retain, nonatomic) NSString *reportStr;
@property (nonatomic) BOOL isKeyView;

- (id)initWithTime:(unsigned long long)a0 withStr:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toString;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

@class NSString;

@interface AnimaXServiceScope : NSObject <NSCopying>

@property (class, readonly) AnimaXServiceScope *defaultScope;

@property (readonly, copy, nonatomic) NSString *value;

+ (id)scopeWithValue:(id)a0;
+ (void)initialize;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

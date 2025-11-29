@interface _YYCGColor : NSObject <NSCopying, NSCoding>

@property (nonatomic) struct CGColor { } *CGColor;

+ (id)colorWithCGColor:(struct CGColor { } *)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

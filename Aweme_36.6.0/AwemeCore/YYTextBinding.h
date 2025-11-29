@interface YYTextBinding : NSObject <NSCoding, NSCopying>

@property (nonatomic) BOOL deleteConfirm;

+ (id)bindingWithDeleteConfirm:(BOOL)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

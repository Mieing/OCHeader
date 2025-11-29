@class NSString;

@interface POPAnimatableProperty : NSObject <NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) id /* block */ readBlock;
@property (readonly, copy, nonatomic) id /* block */ writeBlock;
@property (readonly, nonatomic) double threshold;

+ (id)propertyWithName:(id)a0 initializer:(id /* block */)a1;
+ (id)propertyWithName:(id)a0;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

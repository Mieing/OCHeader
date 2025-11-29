@class NSString;

@interface Diff : NSObject <NSCopying>

@property (nonatomic) int operation;
@property (copy, nonatomic) NSString *text;

+ (id)diffWithOperation:(int)a0 andText:(id)a1;

- (id)initWithOperation:(int)a0 andText:(id)a1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToDiff:(id)a0;

@end

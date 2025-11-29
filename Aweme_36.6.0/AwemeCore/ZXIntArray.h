@interface ZXIntArray : NSObject <NSCopying>

@property (readonly, nonatomic) int *array;
@property (readonly, nonatomic) unsigned int length;

- (id)initWithInts:(int)a0;
- (id)initWithLength:(unsigned int)a0;
- (void)clear;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)sum;

@end

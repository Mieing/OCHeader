@interface ZXBitMatrix : NSObject <NSCopying>

@property (readonly, nonatomic) int bitsSize;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) int *bits;
@property (readonly, nonatomic) int rowSize;

+ (id)parse:(id)a0 setString:(id)a1 unsetString:(id)a2;

- (void)setX:(int)a0 y:(int)a1;
- (id)rowAtY:(int)a0 row:(id)a1;
- (void)setRowAtY:(int)a0 row:(id)a1;
- (id)descriptionWithSetString:(id)a0 unsetString:(id)a1;
- (id)descriptionWithSetString:(id)a0 unsetString:(id)a1 lineSeparator:(id)a2;
- (id)initWithWidth:(int)a0 height:(int)a1 rowSize:(int)a2 bits:(int *)a3;
- (void)unsetX:(int)a0 y:(int)a1;
- (void)flipX:(int)a0 y:(int)a1;
- (void)rotate180;
- (id)enclosingRectangle;
- (id)topLeftOnBit;
- (id)bottomRightOnBit;
- (void)xor:(id)a0;
- (BOOL)getX:(int)a0 y:(int)a1;
- (void)setRegionAtLeft:(int)a0 top:(int)a1 width:(int)a2 height:(int)a3;
- (void)clear;
- (id)description;
- (id)initWithWidth:(int)a0 height:(int)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDimension:(int)a0;

@end

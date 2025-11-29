@interface ZXBitArray : NSObject <NSCopying>

@property (nonatomic) int *bits;
@property (nonatomic) int bitsLength;
@property (nonatomic) int size;

- (int)numberOfTrailingZeros:(int)a0;
- (void)ensureCapacity:(int)a0;
- (void)appendBit:(BOOL)a0;
- (id)initWithBits:(id)a0 size:(int)a1;
- (int)nextSet:(int)a0;
- (int)nextUnset:(int)a0;
- (void)setBulk:(int)a0 newBits:(int)a1;
- (void)setRange:(int)a0 end:(int)a1;
- (BOOL)isRange:(int)a0 end:(int)a1 value:(BOOL)a2;
- (void)appendBitArray:(id)a0;
- (void)toBytes:(int)a0 array:(id)a1 offset:(int)a2 numBytes:(int)a3;
- (id)bitArray;
- (void)appendBits:(int)a0 numBits:(int)a1;
- (void)xor:(id)a0;
- (void)clear;
- (id)description;
- (id)initWithSize:(int)a0;
- (id)init;
- (int)sizeInBytes;
- (unsigned long long)hash;
- (void)reverse;
- (BOOL)get:(int)a0;
- (void)set:(int)a0;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)flip:(int)a0;

@end

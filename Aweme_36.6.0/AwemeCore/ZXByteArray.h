@interface ZXByteArray : NSObject

@property (readonly, nonatomic) char *array;
@property (readonly, nonatomic) unsigned int length;

- (id)initWithArray:(char *)a0 length:(unsigned int)a1;
- (id)initWithLength:(unsigned int)a0 bytes:(int)a1;
- (id)initWithLength:(unsigned int)a0;
- (id)description;
- (id)initWithBytes:(int)a0;
- (void)dealloc;

@end

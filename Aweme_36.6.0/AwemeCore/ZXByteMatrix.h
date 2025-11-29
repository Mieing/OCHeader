@interface ZXByteMatrix : NSObject

@property (readonly, nonatomic) char **array;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) int width;

- (void)setX:(int)a0 y:(int)a1 byteValue:(char)a2;
- (void)setX:(int)a0 y:(int)a1 boolValue:(BOOL)a2;
- (void)setX:(int)a0 y:(int)a1 intValue:(int)a2;
- (char)getX:(int)a0 y:(int)a1;
- (void)clear:(char)a0;
- (id)description;
- (id)initWithWidth:(int)a0 height:(int)a1;
- (void)dealloc;

@end

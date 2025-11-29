@interface ZXBoolArray : NSObject

@property (readonly, nonatomic) BOOL *array;
@property (readonly, nonatomic) unsigned int length;

- (id)initWithLength:(unsigned int)a0 values:(int)a1;
- (id)initWithLength:(unsigned int)a0;
- (void)dealloc;

@end

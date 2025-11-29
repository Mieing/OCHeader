@class NSData;

@interface SKBuiltinBuffer_t : WXPBGeneratedMessage

@property (nonatomic) unsigned int iLen;
@property (retain, nonatomic) NSData *buffer;

+ (id)skBufferWithData:(id)a0;
+ (void)initialize;

- (void)setBuffer:(id)a0;
- (id)buffer;
- (void)setILen:(unsigned int)a0;
- (unsigned int)iLen;

@end

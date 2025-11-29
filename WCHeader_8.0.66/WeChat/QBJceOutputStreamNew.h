@interface QBJceOutputStreamNew : QBJceStreamNew

+ (id)stream;
+ (id)streamWithCapability:(int)a0;

- (id)init;
- (id)initWithBufferSize:(int)a0;
- (void)dealloc;
- (void)preventBufferOverflow:(int)a0;
- (id)data;
- (void)writeTag:(int)a0 type:(int)a1;
- (void)writeInt1:(char)a0;
- (void)writeInt2:(short)a0;
- (void)writeInt4:(int)a0;
- (void)writeInt8:(long long)a0;
- (void)writeBytes:(const void *)a0 size:(int)a1;
- (void)fillWithZero:(unsigned int)a0;
- (void)writeFloat:(float)a0 tag:(int)a1;
- (void)writeDouble:(double)a0 tag:(int)a1;
- (void)writeInt:(long long)a0 tag:(int)a1;
- (void)writeDictionary:(id)a0 tag:(int)a1 required:(BOOL)a2;
- (void)writeArray:(id)a0 tag:(int)a1 required:(BOOL)a2;
- (void)writeNumber:(id)a0 tag:(int)a1 required:(BOOL)a2;
- (void)writeObject:(id)a0 tag:(int)a1 required:(BOOL)a2;
- (void)writeString:(id)a0 tag:(int)a1 required:(BOOL)a2;
- (void)writeData:(id)a0 tag:(int)a1 required:(BOOL)a2;
- (void)writeAnything:(id)a0 tag:(int)a1 required:(BOOL)a2;

@end

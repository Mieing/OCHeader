@class NSData;

@interface QBJceInputStreamNew : QBJceStreamNew

@property (retain, nonatomic) NSData *dataHolders;
@property (nonatomic) int stringLength;
@property (nonatomic) int headType;
@property (readonly, nonatomic) int headTag;

+ (id)streamWithData:(id)a0;

- (id)init;
- (id)data;
- (BOOL)peakHead;
- (BOOL)readHead;
- (char)readInt1;
- (short)readInt2;
- (int)readInt4;
- (long long)readInt8;
- (long long)readInt:(int)a0;
- (float)readFloat:(int)a0;
- (double)readDouble:(int)a0;
- (float)readFloat;
- (double)readDouble;
- (char *)readBytes:(unsigned int)a0;
- (void)skip:(unsigned int)a0;
- (id)readDataWithSize:(int)a0;
- (id)readNumber:(int)a0 required:(BOOL)a1;
- (id)utf8Decode:(char *)a0 length:(int)a1;
- (id)readString:(int)a0 required:(BOOL)a1;
- (id)readData:(int)a0 required:(BOOL)a1;
- (id)readObject:(int)a0 required:(BOOL)a1 description:(Class)a2;
- (id)readArray:(int)a0 required:(BOOL)a1 description:(id)a2;
- (id)readDictionary:(int)a0 required:(BOOL)a1 description:(id)a2;
- (id)readUTF8String:(int)a0 required:(BOOL)a1 description:(id)a2;
- (id)readAnything:(int)a0 required:(BOOL)a1 description:(id)a2;
- (void).cxx_destruct;

@end

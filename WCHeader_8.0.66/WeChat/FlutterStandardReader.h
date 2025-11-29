@class NSData;

@interface FlutterStandardReader : NSObject {
    NSData *_data;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

- (id)initWithData:(id)a0;
- (BOOL)hasMore;
- (void)readBytes:(void *)a0 length:(unsigned long long)a1;
- (unsigned char)readByte;
- (unsigned int)readSize;
- (id)readData:(unsigned long long)a0;
- (id)readUTF8;
- (void)readAlignment:(unsigned char)a0;
- (id)readValue;
- (id)readValueOfType:(unsigned char)a0;
- (void).cxx_destruct;

@end

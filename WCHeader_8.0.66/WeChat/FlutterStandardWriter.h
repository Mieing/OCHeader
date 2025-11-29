@class NSMutableData;

@interface FlutterStandardWriter : NSObject {
    NSMutableData *_data;
}

- (id)initWithData:(id)a0;
- (void)writeByte:(unsigned char)a0;
- (void)writeBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)writeData:(id)a0;
- (void)writeSize:(unsigned int)a0;
- (void)writeAlignment:(unsigned char)a0;
- (void)writeUTF8:(id)a0;
- (void)writeValue:(id)a0;
- (void).cxx_destruct;

@end

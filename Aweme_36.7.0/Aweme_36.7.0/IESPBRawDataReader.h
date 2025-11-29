@interface IESPBRawDataReader : NSObject {
    char *m_ptr;
    int m_size;
    int m_position;
}

- (char)readRawByte;
- (long long)readRawVarint64;
- (int)readRawVarint32;
- (id)initWithData:(id)a0;

@end

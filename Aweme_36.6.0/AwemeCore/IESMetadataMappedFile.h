@class NSString;

@interface IESMetadataMappedFile : NSObject {
    int _fd;
    char *_mappedPointer;
    int _currentFileSize;
    int _currentMappedLength;
}

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) int mapLength;
@property (readonly, nonatomic) int fileSize;

+ (id)mappedFileWithPath:(id)a0 mapLength:(int)a1;

- (void)resetFile;
- (void)mapFile;
- (BOOL)extendFileToSize:(int)a0;
- (BOOL)mmapWithLength:(int)a0;
- (BOOL)safeTruncateFileToSize:(int)a0;
- (BOOL)validateAction:(const char *)a0 location:(int)a1 length:(int)a2;
- (BOOL)boolValueAtLocation:(int)a0;
- (void)writeBool:(BOOL)a0 location:(int)a1;
- (BOOL)extendFile;
- (void)writeChars:(const char *)a0 location:(int)a1;
- (const char *)charsAtLocation:(int)a0 length:(int)a1;
- (void)writeIntValue:(int)a0 location:(int)a1;
- (void)writeCrc32:(unsigned int)a0 location:(int)a1;
- (void)writeData:(id)a0 location:(int)a1;
- (int)intValueAtLocation:(int)a0;
- (unsigned int)crc32AtLocation:(int)a0;
- (id)dataAtLocation:(int)a0 length:(int)a1;
- (BOOL)resetToNewFile;
- (void).cxx_destruct;
- (void)dealloc;

@end

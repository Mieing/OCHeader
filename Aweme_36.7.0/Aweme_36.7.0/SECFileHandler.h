@class NSString, NSData, NSFileHandle, NSMutableData;

@interface SECFileHandler : NSObject

@property (copy, nonatomic) NSString *delimiter;
@property (copy, nonatomic) NSData *delimiterData;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (nonatomic) unsigned long long fileReadOffset;
@property (retain, nonatomic) NSMutableData *bufferData;

+ (double)getFileSizeInKBAtPath:(id)a0;

- (double)getFileSizeInKB;
- (id)readLinesFromLastReadOffset:(unsigned long long)a0;
- (void)writeLinesToEndOfFile:(id)a0;
- (void)seekFileReadOffsetAfterNumberOfLines:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (id)initWithFilePath:(id)a0;
- (void)closeFile;
- (id)readDataOfLength:(unsigned long long)a0;
- (unsigned long long)seekToEndOfFile;
- (unsigned long long)offsetInFile;
- (void)seekToFileOffset:(unsigned long long)a0;

@end

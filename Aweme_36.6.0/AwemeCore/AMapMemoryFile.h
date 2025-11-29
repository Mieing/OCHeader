@class NSString, NSMutableArray, NSRecursiveLock;

@interface AMapMemoryFile : NSObject {
    char *m_ptr;
    struct MiniCodedOutputData { char *x0; unsigned long long x1; int x2; } *m_output;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableArray *arr;
@property (nonatomic) int fd;
@property (nonatomic) unsigned long long allocSize;
@property (nonatomic) unsigned long long actualSize;
@property (nonatomic) unsigned long long elementNum;
@property (nonatomic) BOOL needLoadFromFile;
@property (nonatomic) BOOL hasFullWriteBack;
@property (nonatomic) BOOL needLoadFileToMemory;
@property (copy, nonatomic) NSString *fileName;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long totalSize;
@property (readonly, copy, nonatomic) NSString *filePath;

+ (id)memoryFileWithFileName:(id)a0 absolutePath:(id)a1;

- (id)getAllData;
- (id)initWithFileName:(id)a0 absolutePath:(id)a1;
- (void)_loadFromFile;
- (BOOL)_appendDataForFile:(id)a0;
- (BOOL)_ensureMemorySize:(unsigned long long)a0;
- (BOOL)_isFileValid;
- (BOOL)_writeActualSize:(unsigned long long)a0;
- (BOOL)_writeElementNum:(unsigned long long)a0;
- (BOOL)_protectFromBackgroundWriting:(unsigned long long)a0 writeBlock:(id /* block */)a1;
- (void)_checkLoadData;
- (BOOL)_fullWriteBack;
- (BOOL)_writeRawData:(id)a0;
- (void)lodaDataFromFileToMemory;
- (id)subarrayWithLength:(unsigned long long)a0;
- (void)close;
- (void).cxx_destruct;
- (void)clearAll;
- (BOOL)appendData:(id)a0;
- (void)dealloc;
- (BOOL)inBackground;
- (void)clearMemoryCache;
- (BOOL)canAppendData:(id)a0;

@end

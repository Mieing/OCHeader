@class NSString;

@interface LSMFile : NSObject {
    BOOL m_isReadOnly;
    NSString *m_path;
    NSString *m_relativePath;
    int m_fd;
    unsigned long long m_offset;
    unsigned long long m_dataSize;
    void *m_dic;
    BOOL m_hasBeenFullWriteBack;
    BOOL m_hasLoadedFromFile;
}

@property (nonatomic) unsigned int m_index;

- (id)initWithPath:(id)a0 readOnly:(BOOL)a1;
- (id)initWithClone:(id)a0 path:(id)a1;
- (void)dealloc;
- (BOOL)open:(BOOL)a0;
- (id)cloneToPath:(id)a0;
- (BOOL)rename:(id)a0;
- (id)path;
- (void)setPath:(id)a0;
- (id)relativePath;
- (BOOL)isFileValid;
- (void)setReadOnly;
- (BOOL)hasLoadedFromFile;
- (void)tryLoadFromFile;
- (struct LSMFileItem { unsigned int x0; unsigned char x1[32]; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5[0]; } *)writeData:(id)a0 toFile:(id)a1;
- (struct vector<std::pair<LSMFileItem *, NSData *__unsafe_unretained>, std::allocator<std::pair<LSMFileItem *, NSData *__unsafe_unretained>>> { void *x0; void *x1; struct __compressed_pair<std::pair<LSMFileItem *, NSData *__unsafe_unretained> *, std::allocator<std::pair<LSMFileItem *, NSData *__unsafe_unretained>>> { void *x0; } x2; })writeDatas:(id)a0 toFiles:(id)a1;
- (id)dataOfFile:(id)a0 itemWrap:(struct LSMFileItem **)a1;
- (BOOL)deleteDataOfFile:(id)a0;
- (struct LSMFileItem { unsigned int x0; unsigned char x1[32]; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5[0]; } *)fileItemOfFile:(id)a0;
- (id)allKeys;
- (id)allNonEmptyKeys:(id)a0;
- (unsigned long long)fileCount;
- (unsigned long long)fileSize;
- (unsigned long long)deadStoreSize;
- (unsigned long long)deadStoreSizeWithHandledKeys:(id)a0;
- (void)recaculateDeadStoreSize;
- (BOOL)compactToFile:(id)a0 handledKeys:(id)a1;
- (void).cxx_destruct;

@end

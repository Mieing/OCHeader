@class NSMutableData;

@interface LZLargeFileCache : LZFileCacheRef

@property (nonatomic) long long curFileOffset;
@property (retain, nonatomic) NSMutableData *readBufData;

- (id)init;
- (id)initWithFile:(id)a0 queue:(id)a1 context:(void *)a2 type:(unsigned long long)a3;
- (BOOL)writeFile:(id)a0 data:(id)a1 isFinish:(BOOL *)a2;
- (void)finishWirte:(id)a0;
- (void)endRead:(id)a0;
- (void)releaseMapping;
- (BOOL)openFileAndSetupMapInner:(id)a0;
- (BOOL)readFileInner:(id)a0 range:(struct _LzRange { unsigned long long x0; unsigned long long x1; })a1 data:(id *)a2;
- (void).cxx_destruct;

@end

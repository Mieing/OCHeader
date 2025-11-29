@class MMFICImageFormat, NSString, NSRecursiveLock, FICImageTableMetadata, NSCountedSet;

@interface MMFICImageTable : NSObject {
    NSRecursiveLock *_lock;
    MMFICImageFormat *_imageFormat;
    FICImageTableMetadata *_metaData;
    double _screenScale;
    unsigned long long _imageRowLength;
    struct CGColorSpace { } *_colorSpace;
    NSString *_filePath;
    int _fileDescriptor;
    long long _fileLength;
    unsigned int _entryCount;
    long long _entryLength;
    unsigned int _entriesPerChunk;
    long long _imageLength;
    unsigned long long _chunkLength;
    unsigned int _chunkCount;
    void *_chunkCache;
    NSCountedSet *_chunkSet;
}

@property (readonly, copy, nonatomic) NSString *tableFilePath;
@property (readonly, copy, nonatomic) NSString *metadataFilePath;
@property (nonatomic) int tableUsedCount;

- (id)initWithFormat:(id)a0;
- (void)dealloc;
- (void)setEntryForEntityUUID:(id)a0 imageDrawingBlock:(id /* block */)a1;
- (id)getImageForEntityUUID:(id)a0 isNeedMemoryCache:(BOOL)a1;
- (void)deleteEntryForEntityUUID:(id)a0;
- (id)_cachedChunkAtIndex:(long long)a0;
- (void)_setCachedChunk:(id)a0 index:(long long)a1;
- (id)_chunkAtIndex:(long long)a0;
- (void)_setEntryCount:(unsigned int)a0;
- (id)_entryDataAtIndex:(unsigned long long)a0;
- (void)_entryWasDeallocatedFromChunk:(id)a0;
- (id)_entryDataForEntityUUID:(id)a0;
- (void)reset;
- (void)cleanupFICImgInMemory;
- (BOOL)canImageTableRemoveLocalCache;
- (void).cxx_destruct;

@end

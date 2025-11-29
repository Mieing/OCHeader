@interface MMFICImageTableChunk : NSObject {
    long long _fileOffset;
}

@property (readonly, nonatomic) void *bytes;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) unsigned long long length;

- (id)initWithFileDescriptor:(int)a0 fileOffset:(unsigned long long)a1 index:(unsigned long long)a2 length:(unsigned long long)a3;
- (void)dealloc;

@end

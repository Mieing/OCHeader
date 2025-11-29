@class NSMutableArray;

@interface MMFICImageTableEntry : NSObject {
    void *_bytes;
    unsigned long long _entryLength;
    NSMutableArray *_deallocBlocks;
}

@property (readonly, nonatomic) void *imageAddress;
@property (readonly, nonatomic) unsigned long long imageLength;
@property (nonatomic) struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } entityUUIDBytes;
@property (nonatomic) struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } sourceImageUUIDBytes;

+ (unsigned long long)entryLengthWithImageLength:(unsigned long long)a0;

- (struct { struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x0; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; } *)_metadata;
- (id)initWithImageTableChunk:(id)a0 bytes:(void *)a1 entryLength:(unsigned long long)a2 imageLength:(unsigned long long)a3;
- (void)dealloc;
- (void)executeBlockOnDealloc:(id /* block */)a0;
- (BOOL)flush;
- (void).cxx_destruct;

@end

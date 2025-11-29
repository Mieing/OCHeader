@interface ZOAUSocketPreBuffer : NSObject {
    char *preBuffer;
    unsigned long long preBufferSize;
    char *readPointer;
    char *writePointer;
}

- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (unsigned long long)availableBytes;
- (char *)readBuffer;
- (unsigned long long)availableSpace;
- (void)reset;
- (void)dealloc;
- (void)ensureCapacityForWrite:(unsigned long long)a0;
- (void)didRead:(unsigned long long)a0;
- (char *)writeBuffer;
- (void)didWrite:(unsigned long long)a0;

@end

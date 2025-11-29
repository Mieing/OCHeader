@interface UABufferSocket : UASocket {
    unsigned long long _readBufferTotalLength;
    unsigned long long _readBufferAvailableLength;
    void *_readBuffer;
    void *_readBufferPointer;
}

- (id)initWithHost:(id)a0 port:(id)a1;
- (void)fillBufferWithBytesLength:(unsigned long long)a0;
- (void)resetBufferIfNeeded;
- (void)disconnect;
- (void)dealloc;
- (void)resetBuffer;

@end

@interface LCAudioBufferQueue : NSObject {
    short *bufferData;
    unsigned long long dataSize;
    unsigned long long capacity;
}

+ (id)bufferQueueWithLength:(unsigned long long)a0;
+ (id)bufferQueue;

- (void)releaseBufferQueue;
- (void)resetBufferQueue;
- (void)enqueueData:(short *)a0 dataSize:(unsigned long long)a1;
- (int)dequeueData:(short *)a0 outputSize:(unsigned long long)a1;
- (unsigned long long)dequeueAllData:(short *)a0;
- (unsigned long long)capacity;
- (unsigned long long)freeSpace;
- (unsigned long long)size;

@end

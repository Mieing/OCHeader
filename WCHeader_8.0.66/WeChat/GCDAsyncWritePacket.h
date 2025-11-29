@class NSData;

@interface GCDAsyncWritePacket : NSObject {
    NSData *buffer;
    unsigned long long bytesDone;
    long long tag;
    double timeout;
}

- (id)initWithData:(id)a0 timeout:(double)a1 tag:(long long)a2;
- (void).cxx_destruct;

@end

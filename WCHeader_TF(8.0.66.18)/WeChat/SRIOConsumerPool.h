@class NSMutableArray;

@interface SRIOConsumerPool : NSObject {
    unsigned long long _poolSize;
    NSMutableArray *_bufferedConsumers;
}

- (id)initWithBufferCapacity:(unsigned long long)a0;
- (id)init;
- (id)consumerWithScanner:(id /* block */)a0 handler:(id /* block */)a1 bytesNeeded:(unsigned long long)a2 readToCurrentFrame:(BOOL)a3 unmaskBytes:(BOOL)a4;
- (void)returnConsumer:(id)a0;
- (void).cxx_destruct;

@end

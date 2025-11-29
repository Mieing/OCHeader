@interface SRIOConsumer : NSObject

@property (readonly, copy, nonatomic) id /* block */ consumer;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (nonatomic) unsigned long long bytesNeeded;
@property (readonly, nonatomic) BOOL readToCurrentFrame;
@property (readonly, nonatomic) BOOL unmaskBytes;

- (void)resetWithScanner:(id /* block */)a0 handler:(id /* block */)a1 bytesNeeded:(unsigned long long)a2 readToCurrentFrame:(BOOL)a3 unmaskBytes:(BOOL)a4;
- (void).cxx_destruct;

@end

@class NSString;

@interface TMNetworkDownlinkEncryptionLogger : NSObject

@property (nonatomic) BOOL needSample;
@property (copy, nonatomic) NSString *tag;

- (void)logContent:(id)a0;
- (id)initWithSamples:(unsigned long long)a0 andTag:(id)a1;
- (void)logSample:(id /* block */)a0;
- (void).cxx_destruct;

@end

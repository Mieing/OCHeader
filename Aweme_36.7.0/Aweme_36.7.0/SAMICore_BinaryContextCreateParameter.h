@interface SAMICore_BinaryContextCreateParameter : NSObject

@property (nonatomic) int sampleRate;
@property (nonatomic) int maxBlockSize;
@property (nonatomic) int numChannel;
@property (nonatomic) long long type;
@property (nonatomic) void *data;
@property (nonatomic) int dataLen;

@end

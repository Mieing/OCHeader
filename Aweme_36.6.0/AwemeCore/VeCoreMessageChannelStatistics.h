@interface VeCoreMessageChannelStatistics : NSObject

@property (nonatomic) long long sendCount;
@property (nonatomic) long long recvCount;

- (id)init;
- (id)jsonString;

@end

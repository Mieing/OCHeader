@class NSArray;

@interface TSPKStatisticConfig : NSObject

@property (nonatomic) long long factTimeout;
@property (nonatomic) long long factQueueSize;
@property (copy, nonatomic) NSArray *factParameters;

- (void).cxx_destruct;

@end

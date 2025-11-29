@class NSString;

@interface TTVideoEngineThreadInfo : NSObject

@property (nonatomic) unsigned int thread;
@property (nonatomic) float usage;
@property (nonatomic) long long priority;
@property (nonatomic) long long weight;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;

@end

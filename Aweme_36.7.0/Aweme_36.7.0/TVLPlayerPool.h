@class NSLock, NSMutableArray;

@interface TVLPlayerPool : NSObject {
    NSLock *_poolLock;
}

@property (retain, nonatomic) NSMutableArray *playerArray;
@property (nonatomic) long long maxQueueSize;

+ (id)sharedInstance;

- (id)initWithMaxQueueSize:(long long)a0;
- (void)recylePlayer:(id)a0;
- (void).cxx_destruct;

@end

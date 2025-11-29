@class NSString;

@interface AWEFormatXPlayQueueConfig : NSObject

@property (copy, nonatomic) NSString *queue;
@property (copy, nonatomic) NSString *queueType;
@property (nonatomic) long long ranking;
@property (nonatomic) long long waitTime;
@property (nonatomic) long long actualWaitTime;
@property (nonatomic) long long rankTotal;
@property (nonatomic) long long expireTime;
@property (nonatomic) BOOL isVipQueue;
@property (nonatomic) int surpass;
@property (nonatomic) int state;

- (void).cxx_destruct;

@end

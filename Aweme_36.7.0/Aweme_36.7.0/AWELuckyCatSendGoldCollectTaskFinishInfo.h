@class NSString;

@interface AWELuckyCatSendGoldCollectTaskFinishInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) long long taskID;
@property (nonatomic) BOOL isLastTime;
@property (nonatomic) BOOL isReceiverLastTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

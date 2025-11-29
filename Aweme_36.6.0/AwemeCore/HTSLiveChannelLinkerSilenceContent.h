@class NSString;

@interface HTSLiveChannelLinkerSilenceContent : IESLivePBBaseMessage

@property (nonatomic) int silenceStatus;
@property (copy, nonatomic) NSString *fromUserId;
@property (copy, nonatomic) NSString *toUserId;
@property (copy, nonatomic) NSString *ackMessage;
@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSString *secFromUserId;
@property (copy, nonatomic) NSString *secToUserId;
@property (nonatomic) int silenceSource;

+ (id)descriptor;

@end

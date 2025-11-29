@class NSString;

@interface HTSLiveChannelLinkerEnterContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUserId;

+ (id)descriptor;

@end

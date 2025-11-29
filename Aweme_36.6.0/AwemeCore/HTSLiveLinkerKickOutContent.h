@class NSString;

@interface HTSLiveLinkerKickOutContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (nonatomic) int controlType;
@property (nonatomic) long long paidCount;
@property (nonatomic) long long linkDuration;
@property (nonatomic) int kickOutSource;
@property (nonatomic) BOOL switchToSilence;

+ (id)descriptor;

@end

@class NSString;

@interface UnSilenceRes : IESLivePBBaseMessage

@property (nonatomic) long long total;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *userId;

+ (id)descriptor;

@end

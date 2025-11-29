@class NSString;

@interface HTSLiveHonorInfo : IESLivePBBaseMessage

@property (nonatomic) int honorScene;
@property (nonatomic) int honorType;
@property (copy, nonatomic) NSString *body;
@property (nonatomic) int duration;
@property (nonatomic) long long playEndTimestamp;

+ (id)descriptor;

@end

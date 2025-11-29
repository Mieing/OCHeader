@interface HTSLiveHoverInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL isHover;
@property (nonatomic) long long priority;
@property (nonatomic) long long duration;
@property (nonatomic) long long durationInvolveDisplayTime;
@property (nonatomic) long long durationThreshold;

+ (id)descriptor;

@end

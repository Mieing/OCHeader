@interface HTSLiveShareAnchorInfo : IESLivePBBaseMessage

@property (nonatomic) long long isLatestAnchor;
@property (nonatomic) long long isReflowAnchor;
@property (nonatomic) long long isLowFansAnchor;

+ (id)descriptor;

@end

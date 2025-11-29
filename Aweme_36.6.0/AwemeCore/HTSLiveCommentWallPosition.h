@interface HTSLiveCommentWallPosition : IESLivePBBaseMessage

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) long long eventTime;

+ (id)descriptor;

@end

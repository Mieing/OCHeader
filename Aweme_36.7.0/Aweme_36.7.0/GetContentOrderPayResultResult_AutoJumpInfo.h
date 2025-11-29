@class NSString;

@interface GetContentOrderPayResultResult_AutoJumpInfo : IESLivePBBaseMessage

@property (nonatomic) int jumpType;
@property (nonatomic) long long holdSeconds;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *linkURL;
@property (copy, nonatomic) NSString *title;

+ (id)descriptor;

@end

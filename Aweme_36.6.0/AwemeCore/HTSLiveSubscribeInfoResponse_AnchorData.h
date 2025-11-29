@class NSString;

@interface HTSLiveSubscribeInfoResponse_AnchorData : IESLivePBBaseMessage

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *nickname;

+ (id)descriptor;

@end

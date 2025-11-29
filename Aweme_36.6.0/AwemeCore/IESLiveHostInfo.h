@class NSString;

@interface IESLiveHostInfo : IESLivePBBaseMessage

@property (nonatomic) long long isHost;
@property (copy, nonatomic) NSString *hostPositionName;

+ (id)descriptor;

@end

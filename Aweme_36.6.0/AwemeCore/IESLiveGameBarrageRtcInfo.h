@class NSString;

@interface IESLiveGameBarrageRtcInfo : IESLivePBBaseMessage

@property (nonatomic) long long linkerId;
@property (copy, nonatomic) NSString *rtcInfo;

+ (id)descriptor;

@end

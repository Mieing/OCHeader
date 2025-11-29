@class IESLiveKTVMVInfo;

@interface IESLiveKtvProfitGetPlayingMVResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKTVMVInfo *mvInfo;
@property (nonatomic) BOOL hasMvInfo;

+ (id)descriptor;

@end

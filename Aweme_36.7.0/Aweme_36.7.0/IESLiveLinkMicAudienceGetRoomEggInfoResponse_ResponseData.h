@class IESLiveLinkmicProfitRoomEggInfo;

@interface IESLiveLinkMicAudienceGetRoomEggInfoResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkmicProfitRoomEggInfo *roomEggInfo;
@property (nonatomic) BOOL hasRoomEggInfo;
@property (nonatomic) long long currentTimeMs;

+ (id)descriptor;

@end

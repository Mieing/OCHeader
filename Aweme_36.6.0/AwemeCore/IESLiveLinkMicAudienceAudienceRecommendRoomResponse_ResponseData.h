@class IESLivelinkmicAudienceRecommendItem;

@interface IESLiveLinkMicAudienceAudienceRecommendRoomResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLivelinkmicAudienceRecommendItem *linkmicAudienceRecommendItem;
@property (nonatomic) BOOL hasLinkmicAudienceRecommendItem;

+ (id)descriptor;

@end

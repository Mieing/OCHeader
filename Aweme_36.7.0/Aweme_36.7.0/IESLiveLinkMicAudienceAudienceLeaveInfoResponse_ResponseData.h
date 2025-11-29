@class IESLivelinkmicAudienceRecommendItem, IESLiveLinkMicAudienceUserInfoInLinkmic;

@interface IESLiveLinkMicAudienceAudienceLeaveInfoResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceUserInfoInLinkmic *userInfoInLinkmic;
@property (nonatomic) BOOL hasUserInfoInLinkmic;
@property (retain, nonatomic) IESLivelinkmicAudienceRecommendItem *linkmicAudienceRecommendItem;
@property (nonatomic) BOOL hasLinkmicAudienceRecommendItem;

+ (id)descriptor;

@end

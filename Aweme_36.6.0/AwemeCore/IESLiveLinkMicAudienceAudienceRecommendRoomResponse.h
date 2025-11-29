@class IESLiveLinkMicAudienceAudienceRecommendRoomResponse_ResponseData;

@interface IESLiveLinkMicAudienceAudienceRecommendRoomResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceAudienceRecommendRoomResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end

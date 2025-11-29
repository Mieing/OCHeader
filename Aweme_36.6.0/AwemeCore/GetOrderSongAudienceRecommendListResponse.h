@class GetOrderSongAudienceRecommendListResponse_ResponseData;

@interface GetOrderSongAudienceRecommendListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetOrderSongAudienceRecommendListResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end

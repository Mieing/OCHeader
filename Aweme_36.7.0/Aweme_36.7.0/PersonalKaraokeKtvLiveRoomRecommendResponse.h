@class PersonalKaraokeKtvLiveRoomRecommendResponse_ResponseData;

@interface PersonalKaraokeKtvLiveRoomRecommendResponse : IESLivePBBaseMessage

@property (retain, nonatomic) PersonalKaraokeKtvLiveRoomRecommendResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end

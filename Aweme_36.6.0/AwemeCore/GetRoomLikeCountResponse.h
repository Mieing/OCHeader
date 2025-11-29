@class GetRoomLikeCountResponse_Data;

@interface GetRoomLikeCountResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetRoomLikeCountResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end

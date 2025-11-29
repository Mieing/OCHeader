@class UpdateCrossRoomInfoResponse_ResponseData;

@interface UpdateCrossRoomInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UpdateCrossRoomInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
